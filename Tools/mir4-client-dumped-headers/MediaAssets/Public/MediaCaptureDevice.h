#pragma once
#include "CoreMinimal.h"
#include "MediaCaptureDevice.generated.h"

USTRUCT(BlueprintType)
struct MEDIAASSETS_API FMediaCaptureDevice {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString URL;
    
    FMediaCaptureDevice();
};

