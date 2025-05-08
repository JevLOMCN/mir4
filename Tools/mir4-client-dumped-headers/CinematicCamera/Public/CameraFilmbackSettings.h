#pragma once
#include "CoreMinimal.h"
#include "CameraFilmbackSettings.generated.h"

USTRUCT(BlueprintType)
struct FCameraFilmbackSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float SensorWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float SensorHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float SensorAspectRatio;
    
    CINEMATICCAMERA_API FCameraFilmbackSettings();
};

