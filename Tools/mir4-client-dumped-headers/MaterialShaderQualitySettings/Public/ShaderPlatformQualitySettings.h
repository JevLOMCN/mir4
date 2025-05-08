#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MaterialQualityOverrides.h"
#include "ShaderPlatformQualitySettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, PerObjectConfig, Config=Engine)
class MATERIALSHADERQUALITYSETTINGS_API UShaderPlatformQualitySettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMaterialQualityOverrides QualityOverrides[3];
    
    UShaderPlatformQualitySettings();

};

