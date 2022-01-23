// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UntitledCoopShooter : ModuleRules
{
	public UntitledCoopShooter(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "GameplayCameras", "PhysicsCore", "NavigationSystem" });
	}
}
