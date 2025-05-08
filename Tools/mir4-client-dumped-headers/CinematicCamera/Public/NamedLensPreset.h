#pragma once
#include "CoreMinimal.h"
#include "CameraLensSettings.h"
#include "NamedLensPreset.generated.h"

USTRUCT(BlueprintType)
struct FNamedLensPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraLensSettings LensSettings;
    
    CINEMATICCAMERA_API FNamedLensPreset();
};

