#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MaterialShaderQualitySettings.generated.h"

class UShaderPlatformQualitySettings;

UCLASS(Blueprintable)
class MATERIALSHADERQUALITYSETTINGS_API UMaterialShaderQualitySettings : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UShaderPlatformQualitySettings*> ForwardSettingMap;
    
public:
    UMaterialShaderQualitySettings();

};

