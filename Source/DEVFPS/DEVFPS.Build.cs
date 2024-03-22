// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DEVFPS : ModuleRules
{
	public DEVFPS(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" , "GameplayTags","GameplayTasks","GameplayAbilities"});
	}
}
