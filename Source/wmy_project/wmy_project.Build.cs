// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class wmy_project : ModuleRules
{
	public wmy_project(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
