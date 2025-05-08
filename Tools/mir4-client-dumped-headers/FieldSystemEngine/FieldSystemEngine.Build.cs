using UnrealBuildTool;

public class FieldSystemEngine : ModuleRules {
    public FieldSystemEngine(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "ChaosSolverEngine",
            "Core",
            "CoreUObject",
            "Engine",
            "FieldSystemCore",
        });
    }
}
