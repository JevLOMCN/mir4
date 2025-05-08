#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundEffectSubmixPreset -FallbackName=SoundEffectSubmixPreset
#include "SubmixEffectTapDelaySettings.h"
#include "TapDelayInfo.h"
#include "SubmixEffectTapDelayPreset.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SYNTHESIS_API USubmixEffectTapDelayPreset : public USoundEffectSubmixPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubmixEffectTapDelaySettings Settings;
    
    USubmixEffectTapDelayPreset();

    UFUNCTION(BlueprintCallable)
    void SetTap(int32 TapId, const FTapDelayInfo& TapInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSubmixEffectTapDelaySettings& InSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetInterpolationTime(float Time);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTap(int32 TapId);
    
    UFUNCTION(BlueprintCallable)
    void GetTapIds(TArray<int32>& TapIds);
    
    UFUNCTION(BlueprintCallable)
    void GetTap(int32 TapId, FTapDelayInfo& TapInfo);
    
    UFUNCTION(BlueprintCallable)
    float GetMaxDelayInMilliseconds();
    
    UFUNCTION(BlueprintCallable)
    void AddTap(int32& TapId);
    
};

