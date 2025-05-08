using UnrealBuildTool;

public class MirMobile : ModuleRules {
    public MirMobile(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "Core",
            "CoreUObject",
            "EasyFirebase",
            "Engine",
            "LevelSequence",
            "MediaAssets",
            "NavigationSystem",
            "Paper2D",
            "Slate",
            "SlateCore",
            "UMG",
            "WNGamePlugin",
            "WebBrowserWidget",
        });
    }
}
