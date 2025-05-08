#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlendableInterface -FallbackName=BlendableInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=Renderer -ObjectName=LightPropagationVolumeSettings -FallbackName=LightPropagationVolumeSettings
#include "LightPropagationVolumeBlendable.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ULightPropagationVolumeBlendable : public UObject, public IBlendableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLightPropagationVolumeSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BlendWeight;
    
    ULightPropagationVolumeBlendable();


    // Fix for true pure virtual functions not being implemented
};

