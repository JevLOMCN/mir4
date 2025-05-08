using UnrealBuildTool;

public class GeometryCollectionEngine : ModuleRules {
    public GeometryCollectionEngine(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "ChaosSolverEngine",
            "Core",
            "CoreUObject",
            "Engine",
            "FieldSystemEngine",
            "GeometryCollectionCore",
            "GeometryCollectionSimulationCore",
        });
    }
}
