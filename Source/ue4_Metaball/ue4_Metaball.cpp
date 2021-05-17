// Copyright Epic Games, Inc. All Rights Reserved.

#include "ue4_Metaball.h"
#include "Modules/ModuleManager.h"
#include "Misc/Paths.h"

void FMetaballModule::StartupModule()
{
	FString ShaderDirectory = FPaths::Combine(FPaths::ProjectDir(), TEXT("Shaders"));
	AddShaderSourceDirectoryMapping("/Project", ShaderDirectory);
}

IMPLEMENT_PRIMARY_GAME_MODULE(FMetaballModule, ue4_Metaball, "ue4_Metaball");