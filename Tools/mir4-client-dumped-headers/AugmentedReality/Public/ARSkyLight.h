#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkyLight -FallbackName=SkyLight
#include "ARSkyLight.generated.h"

class UAREnvironmentCaptureProbe;

UCLASS(Blueprintable)
class AUGMENTEDREALITY_API AARSkyLight : public ASkyLight {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAREnvironmentCaptureProbe* CaptureProbe;
    
public:
    AARSkyLight(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEnvironmentCaptureProbe(UAREnvironmentCaptureProbe* InCaptureProbe);
    
};

