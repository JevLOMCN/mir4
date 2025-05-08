#pragma once
#include "CoreMinimal.h"
#include "IGPickedMedia.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct IOSGOODIES_API FIGPickedMedia {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* PickedImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MediaType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FullMediaPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ReferenceUrl;
    
    FIGPickedMedia();
};

