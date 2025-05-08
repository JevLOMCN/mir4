#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AGVibrationEffect.generated.h"

class UAGVibrationEffect;

UCLASS(Blueprintable)
class ANDROIDGOODIES_API UAGVibrationEffect : public UObject {
    GENERATED_BODY()
public:
    UAGVibrationEffect();

    UFUNCTION(BlueprintCallable)
    static UAGVibrationEffect* VibrationEffectWaveFormWithAmplitudes(TArray<float> timings, TArray<int32> amplitudes, int32 Repeat);
    
    UFUNCTION(BlueprintCallable)
    static UAGVibrationEffect* VibrationEffectWaveForm(TArray<float> timings, int32 Repeat);
    
    UFUNCTION(BlueprintCallable)
    static UAGVibrationEffect* VibrationEffectOneShot(float Seconds, int32 Amplitude);
    
};

