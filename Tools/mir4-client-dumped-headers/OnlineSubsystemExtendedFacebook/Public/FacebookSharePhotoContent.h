#pragma once
#include "CoreMinimal.h"
#include "EFacebookImageFormat.h"
#include "FacebookSharePhotoContent.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FFacebookSharePhotoContent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFacebookImageFormat ImageFormat;
    
    ONLINESUBSYSTEMEXTENDEDFACEBOOK_API FFacebookSharePhotoContent();
};

