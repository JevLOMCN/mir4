#pragma once
#include "CoreMinimal.h"
#include "MediaSoundComponentSpectralData.generated.h"

USTRUCT(BlueprintType)
struct FMediaSoundComponentSpectralData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrequencyHz;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Magnitude;
    
    MEDIAASSETS_API FMediaSoundComponentSpectralData();
};

