#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EyeTrackerGazeData.h"
#include "EyeTrackerStereoGazeData.h"
#include "EyeTrackerFunctionLibrary.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class EYETRACKER_API UEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEyeTrackerFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetEyeTrackedPlayer(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStereoGazeDataAvailable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEyeTrackerConnected();
    
    UFUNCTION(BlueprintCallable)
    static bool GetStereoGazeData(FEyeTrackerStereoGazeData& OutGazeData);
    
    UFUNCTION(BlueprintCallable)
    static bool GetGazeData(FEyeTrackerGazeData& OutGazeData);
    
};

