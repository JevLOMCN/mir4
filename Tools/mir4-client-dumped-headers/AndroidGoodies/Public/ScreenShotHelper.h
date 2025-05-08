#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ScreenShotHelper.generated.h"

UCLASS(Blueprintable)
class UScreenShotHelper : public UObject {
    GENERATED_BODY()
public:
    UScreenShotHelper();

    UFUNCTION(BlueprintCallable)
    void ProcessScreenShot(int32 InSizeX, int32 InSizeY, const TArray<FColor>& InImageData);
    
};

