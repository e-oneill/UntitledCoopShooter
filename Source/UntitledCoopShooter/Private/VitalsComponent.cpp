// Fill out your copyright notice in the Description page of Project Settings.


#include "VitalsComponent.h"
#include "Net/UnrealNetwork.h"
#include "TimerManager.h"
// Sets default values for this component's properties
UVitalsComponent::UVitalsComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	MaxHealth = 100;
	Health = MaxHealth;
	MaxShield = 0;
	Shield = MaxShield;
	// ...
	bIsDead = false;
	TeamNum = 255;
	Armor = MaxArmor;
}


// Called when the game starts
void UVitalsComponent::BeginPlay()
{
	Super::BeginPlay();
	SetIsReplicated(true);
	// ...
	if (GetOwnerRole() == ROLE_Authority)
	{
		Health = MaxHealth;
		Shield = MaxShield;
		Armor = MaxArmor;
		AActor* MyOwner = GetOwner();
		if (MyOwner)
		{
			MyOwner->OnTakeAnyDamage.AddDynamic(this, &UVitalsComponent::handleTakeDamage);
		}

		ShieldSecondRegen = MaxShield / ShieldRegenDuration;
	}
}


void UVitalsComponent::OnRep_Health(float OldHealth)
{
	float Damage = Health - OldHealth;
	OnHealthChanged.Broadcast(this, Health, Damage, nullptr, nullptr, nullptr);
}

void UVitalsComponent::StartShieldRegen()
{
	bShieldRegen = true;
}

void UVitalsComponent::OnRep_Shield(float OldShield)
{
	float Damage = Shield - OldShield;
	OnShieldChanged.Broadcast(this, Shield, Damage, nullptr, nullptr, nullptr);
}

void UVitalsComponent::handleTakeDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser)
{
	bShieldRegen = false;
	if (DamageCauser != DamagedActor && IsFriendly(DamageCauser, DamagedActor))
	{
		//Friendly Damage setup
		//ASGameMode* GM = Cast<ASGameMode>(GetWorld()->GetAuthGameMode());
		//if (GM)
		//{
		//	Damage = Damage * GM->GetFriendlyFirePercentage();
		//}
	}
	if (Damage <= 0.0f || bIsDead)
	{
		return;
	}
	if (Shield > 0.0f)
	{
		UE_LOG(LogTemp, Log, TEXT("Character has a shield, going into shield damage calculation"))
			float ShieldDamage = Damage;
		if (Damage < Shield)
		{
			Shield -= Damage;
			Damage = 0.f;
		}
		else
		{
			ShieldDamage = Shield;
			Damage = Damage - Shield;
			Shield = 0.0f;

		}
		OnShieldChanged.Broadcast(this, Shield, ShieldDamage, DamageType, InstigatedBy, DamageCauser);
		UE_LOG(LogTemp, Log, TEXT("%s Damage Taken, new Shield is %s"), *FString::SanitizeFloat(ShieldDamage), *FString::SanitizeFloat(Shield));
	}
	if (Damage > 0.0f)
	{
		if (Armor > 0.f)
		{
			float ArmorDamage = Damage;
			if (Damage < Armor)
			{
				Armor -= Damage;
				Damage = 0.f;
			}
			else
			{
				ArmorDamage = Armor;
				Damage = Damage - Armor;
				Armor = 0.f;
			}
			OnArmorChanged.Broadcast(this, Armor, ArmorDamage, DamageType, InstigatedBy, DamageCauser);
			UE_LOG(LogTemp, Log, TEXT("%s Damage Taken, new Armor is %s"), *FString::SanitizeFloat(ArmorDamage), *FString::SanitizeFloat(Armor));
		}
		Health = FMath::Clamp(Health - Damage, 0.0f, MaxHealth);
		if (Damage > 0.f)
		{
			UE_LOG(LogTemp, Log, TEXT("%s Damage Taken, new Health is %s"), *FString::SanitizeFloat(Damage), *FString::SanitizeFloat(Health));

			OnHealthChanged.Broadcast(this, Health, Damage, DamageType, InstigatedBy, DamageCauser);
			if (Health <= 0.0f && !bIsDead)
			{
				//Tracks kills for score, etc.
				//ASGameMode* GM = Cast<ASGameMode>(GetWorld()->GetAuthGameMode());
				//if (GM)
				//{
				//	GM->OnActorKilled.Broadcast(DamagedActor, DamageCauser);
				//}
				bIsDead = true;
			}
		}
	}
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle_StartShieldRegen);
	GetWorld()->GetTimerManager().SetTimer(TimerHandle_StartShieldRegen, this, &UVitalsComponent::StartShieldRegen, ShieldRegenDelay, false);
}

void UVitalsComponent::OnRep_Armor(float OldArmor)
{
	float Damage = Armor - OldArmor;
	OnShieldChanged.Broadcast(this, Armor, Damage, nullptr, nullptr, nullptr);
}

// Called every frame
void UVitalsComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (GetOwnerRole() == ROLE_Authority)
	{
		if (bShieldRegen)
		{
			float ShieldRegenAmount = ShieldSecondRegen * DeltaTime;
			//UE_LOG(LogTemp, Log, TEXT("Shield Regenerating by %f"), ShieldRegenAmount);
			Shield = FMath::Clamp(Shield + ShieldRegenAmount, 0.0f, MaxShield);
			OnShieldChanged.Broadcast(this, Shield, 0.0f, nullptr, nullptr, nullptr);
			if (Shield == MaxShield)
			{
				bShieldRegen = false;
			}
		}
	}
}

void UVitalsComponent::Heal(float HealAmount)
{
	if (HealAmount <= 0.0f || Health <= 0.0f)
	{
		return;
	}

	Health = FMath::Clamp(Health + HealAmount, 0.0f, MaxHealth);

	OnHealthChanged.Broadcast(this, Health, 0.0f, nullptr, nullptr, nullptr);
}

bool UVitalsComponent::IsFriendly(AActor* ActorA, AActor* ActorB)
{
	if (ActorA == nullptr || ActorB == nullptr)
	{
		return true;
	}
	UVitalsComponent* ActorAHC = Cast<UVitalsComponent>(ActorA->GetComponentByClass(UVitalsComponent::StaticClass()));
	UVitalsComponent* ActorBHC = Cast<UVitalsComponent>(ActorB->GetComponentByClass(UVitalsComponent::StaticClass()));
	if (ActorAHC == nullptr || ActorBHC == nullptr)
	{
		return true;
	}

	if (ActorAHC->TeamNum == ActorBHC->TeamNum)
	{
		return true;
	}
	return false;
}

void UVitalsComponent::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UVitalsComponent, Health);
	DOREPLIFETIME(UVitalsComponent, Shield);
	DOREPLIFETIME(UVitalsComponent, Armor);
}

