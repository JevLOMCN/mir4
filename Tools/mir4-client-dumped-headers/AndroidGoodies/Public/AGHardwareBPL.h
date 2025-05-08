#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AGAudioAttributes.h"
#include "BatteryHealth.h"
#include "BatteryPluggedState.h"
#include "BatteryStatus.h"
#include "AGHardwareBPL.generated.h"

class UAGVibrationEffect;

UCLASS(Blueprintable)
class ANDROIDGOODIES_API UAGHardwareBPL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAGHardwareBPL();

private:
    UFUNCTION(BlueprintCallable)
    static void VibrateWithPattern(TArray<float> pattern, int32 repeatFrom);
    
    UFUNCTION(BlueprintCallable)
    static void VibrateWithEffectAndAttributes(UAGVibrationEffect* vibrationEffect, FAGAudioAttributes audioAttributes);
    
    UFUNCTION(BlueprintCallable)
    static void VibrateWithEffect(UAGVibrationEffect* vibrationEffect);
    
    UFUNCTION(BlueprintCallable)
    static void Vibrate(float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void StopVibration();
    
    UFUNCTION(BlueprintCallable)
    static bool IsBatteryPresent();
    
    UFUNCTION(BlueprintCallable)
    static bool IsBatteryLow();
    
    UFUNCTION(BlueprintCallable)
    static bool HasVibrator();
    
    UFUNCTION(BlueprintCallable)
    static bool HasAmplitudeControl();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetImmediateBatteryCurrent();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetBatteryVoltage();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetBatteryTemperature();
    
    UFUNCTION(BlueprintCallable)
    static FString GetBatteryTechnology();
    
    UFUNCTION(BlueprintCallable)
    static BatteryStatus GetBatteryStatus();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetBatteryScale();
    
    UFUNCTION(BlueprintCallable)
    static TEnumAsByte<BatteryPluggedState> GetBatteryPluggedState();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetBatteryLevel();
    
    UFUNCTION(BlueprintCallable)
    static BatteryHealth GetBatteryHealth();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetBatteryEnergyCounter();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetBatteryChargeCounter();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetBatteryCapacity();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetAverageBatteryCurrent();
    
    UFUNCTION(BlueprintCallable)
    static void EnableFlashlight(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static int32 ComputeRemainingChargeTime();
    
    UFUNCTION(BlueprintCallable)
    static bool AreVibrationEffectsSupported();
    
};

