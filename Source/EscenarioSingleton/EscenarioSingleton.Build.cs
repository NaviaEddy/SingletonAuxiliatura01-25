// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class EscenarioSingleton : ModuleRules
{
	public EscenarioSingleton(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
