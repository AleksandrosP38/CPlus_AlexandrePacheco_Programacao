// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class C_Alexandre_Prog : ModuleRules
{
	public C_Alexandre_Prog(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
