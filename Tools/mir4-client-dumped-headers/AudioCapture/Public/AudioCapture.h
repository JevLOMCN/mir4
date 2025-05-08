#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioMixer -ObjectName=AudioGenerator -FallbackName=AudioGenerator
#include "AudioCaptureDeviceInfo.h"
#include "AudioCapture.generated.h"

UCLASS(Blueprintable)
class AUDIOCAPTURE_API UAudioCapture : public UAudioGenerator {
    GENERATED_BODY()
public:
    UAudioCapture();

    UFUNCTION(BlueprintCallable)
    void StopCapturingAudio();
    
    UFUNCTION(BlueprintCallable)
    void StartCapturingAudio();
    
    UFUNCTION(BlueprintCallable)
    bool IsCapturingAudio();
    
    UFUNCTION(BlueprintCallable)
    bool GetAudioCaptureDeviceInfo(FAudioCaptureDeviceInfo& OutInfo);
    
};

