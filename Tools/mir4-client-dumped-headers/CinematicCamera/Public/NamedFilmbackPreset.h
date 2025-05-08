#pragma once
#include "CoreMinimal.h"
#include "CameraFilmbackSettings.h"
#include "NamedFilmbackPreset.generated.h"

USTRUCT(BlueprintType)
struct FNamedFilmbackPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraFilmbackSettings FilmbackSettings;
    
    CINEMATICCAMERA_API FNamedFilmbackPreset();
};

