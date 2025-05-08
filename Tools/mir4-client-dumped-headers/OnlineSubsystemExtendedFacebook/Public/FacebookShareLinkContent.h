#pragma once
#include "CoreMinimal.h"
#include "FacebookShareLinkContent.generated.h"

USTRUCT(BlueprintType)
struct FFacebookShareLinkContent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ContentURL;
    
    ONLINESUBSYSTEMEXTENDEDFACEBOOK_API FFacebookShareLinkContent();
};

