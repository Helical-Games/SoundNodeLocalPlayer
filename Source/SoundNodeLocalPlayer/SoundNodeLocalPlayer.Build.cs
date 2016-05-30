using UnrealBuildTool;
using System.IO;

public class SoundNodeLocalPlayer : ModuleRules
{
	public SoundNodeLocalPlayer(TargetInfo Target)
	{
    PrivateIncludePaths.AddRange(new string[] {"SoundNodeLocalPlayer/Private"});
		PublicIncludePaths.AddRange(new string[] {"SoundNodeLocalPlayer/Public"});
		PublicDependencyModuleNames.AddRange(new string[] {"Core", "CoreUObject", "Engine", "InputCore", "RHI", "Internationalization"});
		PrivateDependencyModuleNames.AddRange(new string[] {});
	}
}