#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "IGFlashlight.generated.h"

UCLASS(Blueprintable)
class IOSGOODIES_API UIGFlashlight : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGFlashlight();

    UFUNCTION(BlueprintCallable)
    static void SetFlashlightLevel(float Level);
    
    UFUNCTION(BlueprintCallable)
    static void EnableFlashlight(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static bool DeviceHasFlashlight();
    
};

