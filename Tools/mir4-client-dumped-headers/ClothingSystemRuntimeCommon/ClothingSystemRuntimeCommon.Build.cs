using UnrealBuildTool;

public class ClothingSystemRuntimeCommon : ModuleRules {
    public ClothingSystemRuntimeCommon(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "ClothingSystemRuntimeInterface",
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
