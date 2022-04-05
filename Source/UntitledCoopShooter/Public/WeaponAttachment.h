// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeaponAttachment.generated.h"

UENUM(BlueprintType)
enum class EAttachmentSite : uint8
{
	Sight,
	TopRail,
	BottomRail,
};

UCLASS()
class UNTITLEDCOOPSHOOTER_API AWeaponAttachment : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeaponAttachment();

	UPROPERTY(EditDefaultsOnly, Category = "Components")
	UStaticMeshComponent* StaticMesh;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, Category = "Attachement", meta = (ClampMin = 0.0f, ClampMax = 20.0f))
	float Weight;

	UPROPERTY(EditDefaultsOnly, Category = "Attachment", meta = (ClampMin = -1.0f, ClampMax = 1.0f))
	float ErgonomicsImpact;

	UPROPERTY(EditDefaultsOnly, Category = "Attachment")
	EAttachmentSite AttachmentSite;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintPure)
	float GetWeight() const {return Weight;}
	UFUNCTION(BlueprintPure)
	float GetErgonomicsImpact() const {return ErgonomicsImpact;}
	UFUNCTION(BlueprintPure)
	EAttachmentSite GetAttachmentSite() const {return AttachmentSite;}

};
