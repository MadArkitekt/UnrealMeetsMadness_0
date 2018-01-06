cmake_minimum_required (VERSION 2.6)
project (UE4)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_COMPILER "/usr/bin/clang++")
set(CMAKE_C_COMPILER "/usr/bin/clang")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include("/Users/MadArkitekt/Documents/Unreal Projects/EpicUnreal/Intermediate/ProjectFiles/IncludeDirectories.cmake")
include("/Users/MadArkitekt/Documents/Unreal Projects/EpicUnreal/Intermediate/ProjectFiles/Definitions.cmake")
include("/Users/MadArkitekt/Documents/Unreal Projects/EpicUnreal/Intermediate/ProjectFiles/UE4Editor.cmake")

set(MONO_ROOT_PATH "/Users/Shared/Epic Games/UE_4.17/Engine/Binaries/DotNET")
set(BUILD cd "${MONO_ROOT_PATH}")

# Custom target for UE4Editor project, DebugGame configuration
add_custom_target(UE4Editor-DebugGame ${BUILD} && mono UnrealBuildTool.exe UE4Editor Mac DebugGame -project="/Users/MadArkitekt/Documents/Unreal Projects/EpicUnreal/EpicUnreal.uproject" -game -progress)
add_custom_target(UE4Editor-DebugGame-CLEAN ${BUILD} && mono UnrealBuildTool.exe UE4Editor Mac DebugGame -project="/Users/MadArkitekt/Documents/Unreal Projects/EpicUnreal/EpicUnreal.uproject" -clean)


# Custom target for UE4Editor project, Development configuration
add_custom_target(UE4Editor-Development ${BUILD} && mono UnrealBuildTool.exe UE4Editor Mac Development -project="/Users/MadArkitekt/Documents/Unreal Projects/EpicUnreal/EpicUnreal.uproject" -game -progress)
add_custom_target(UE4Editor-Development-CLEAN ${BUILD} && mono UnrealBuildTool.exe UE4Editor Mac Development -project="/Users/MadArkitekt/Documents/Unreal Projects/EpicUnreal/EpicUnreal.uproject" -clean)

include("/Users/MadArkitekt/Documents/Unreal Projects/EpicUnreal/Intermediate/ProjectFiles/UE4Game.cmake")

# Custom target for UE4Game project, DebugGame configuration
add_custom_target(UE4Game-DebugGame ${BUILD} && mono UnrealBuildTool.exe UE4Game Mac DebugGame -project="/Users/MadArkitekt/Documents/Unreal Projects/EpicUnreal/EpicUnreal.uproject" -game -progress)
add_custom_target(UE4Game-DebugGame-CLEAN ${BUILD} && mono UnrealBuildTool.exe UE4Game Mac DebugGame -project="/Users/MadArkitekt/Documents/Unreal Projects/EpicUnreal/EpicUnreal.uproject" -clean)


# Custom target for UE4Game project, Development configuration
add_custom_target(UE4Game-Development ${BUILD} && mono UnrealBuildTool.exe UE4Game Mac Development -project="/Users/MadArkitekt/Documents/Unreal Projects/EpicUnreal/EpicUnreal.uproject" -game -progress)
add_custom_target(UE4Game-Development-CLEAN ${BUILD} && mono UnrealBuildTool.exe UE4Game Mac Development -project="/Users/MadArkitekt/Documents/Unreal Projects/EpicUnreal/EpicUnreal.uproject" -clean)

include("/Users/MadArkitekt/Documents/Unreal Projects/EpicUnreal/Intermediate/ProjectFiles/EpicUnreal.cmake")

# Custom target for EpicUnreal project, DebugGame configuration
add_custom_target(EpicUnreal-DebugGame ${BUILD} && mono UnrealBuildTool.exe EpicUnreal Mac DebugGame -project="/Users/MadArkitekt/Documents/Unreal Projects/EpicUnreal/EpicUnreal.uproject" -game -progress)
add_custom_target(EpicUnreal-DebugGame-CLEAN ${BUILD} && mono UnrealBuildTool.exe EpicUnreal Mac DebugGame -project="/Users/MadArkitekt/Documents/Unreal Projects/EpicUnreal/EpicUnreal.uproject" -clean)


# Custom target for EpicUnreal project, Development configuration
add_custom_target(EpicUnreal-Development ${BUILD} && mono UnrealBuildTool.exe EpicUnreal Mac Development -project="/Users/MadArkitekt/Documents/Unreal Projects/EpicUnreal/EpicUnreal.uproject" -game -progress)
add_custom_target(EpicUnreal-Development-CLEAN ${BUILD} && mono UnrealBuildTool.exe EpicUnreal Mac Development -project="/Users/MadArkitekt/Documents/Unreal Projects/EpicUnreal/EpicUnreal.uproject" -clean)

include("/Users/MadArkitekt/Documents/Unreal Projects/EpicUnreal/Intermediate/ProjectFiles/EpicUnrealEditor.cmake")

# Custom target for EpicUnrealEditor project, DebugGame configuration
add_custom_target(EpicUnrealEditor-DebugGame ${BUILD} && mono UnrealBuildTool.exe EpicUnrealEditor Mac DebugGame -project="/Users/MadArkitekt/Documents/Unreal Projects/EpicUnreal/EpicUnreal.uproject" -game -progress)
add_custom_target(EpicUnrealEditor-DebugGame-CLEAN ${BUILD} && mono UnrealBuildTool.exe EpicUnrealEditor Mac DebugGame -project="/Users/MadArkitekt/Documents/Unreal Projects/EpicUnreal/EpicUnreal.uproject" -clean)


# Custom target for EpicUnrealEditor project, Development configuration
add_custom_target(EpicUnrealEditor-Development ${BUILD} && mono UnrealBuildTool.exe EpicUnrealEditor Mac Development -project="/Users/MadArkitekt/Documents/Unreal Projects/EpicUnreal/EpicUnreal.uproject" -game -progress)
add_custom_target(EpicUnrealEditor-Development-CLEAN ${BUILD} && mono UnrealBuildTool.exe EpicUnrealEditor Mac Development -project="/Users/MadArkitekt/Documents/Unreal Projects/EpicUnreal/EpicUnreal.uproject" -clean)

add_executable(PleaseIgnoreMe ${EpicUnrealEditor_FILES})