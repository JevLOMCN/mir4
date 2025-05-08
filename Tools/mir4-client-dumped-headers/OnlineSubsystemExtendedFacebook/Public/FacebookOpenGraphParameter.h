#pragma once
#include "CoreMinimal.h"
#include "FacebookOpenGraphParameter.generated.h"

USTRUCT(BlueprintType)
struct FFacebookOpenGraphParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    ONLINESUBSYSTEMEXTENDEDFACEBOOK_API FFacebookOpenGraphParameter();
};

