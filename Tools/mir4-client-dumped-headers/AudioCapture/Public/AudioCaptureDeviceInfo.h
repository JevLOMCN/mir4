#pragma once
#include "CoreMinimal.h"
#include "AudioCaptureDeviceInfo.generated.h"

USTRUCT(BlueprintType)
struct AUDIOCAPTURE_API FAudioCaptureDeviceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DeviceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumInputChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SampleRate;
    
    FAudioCaptureDeviceInfo();
};

