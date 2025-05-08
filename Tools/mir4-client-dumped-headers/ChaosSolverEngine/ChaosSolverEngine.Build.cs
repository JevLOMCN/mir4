using UnrealBuildTool;

public class ChaosSolverEngine : ModuleRules {
    public ChaosSolverEngine(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "ChaosSolvers",
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
