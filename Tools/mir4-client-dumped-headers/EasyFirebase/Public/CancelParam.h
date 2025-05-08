#pragma once
#include "CoreMinimal.h"
#include "CancelParam.generated.h"

USTRUCT(BlueprintType)
struct FCancelParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ErrorCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ErrorMessage;
    
    EASYFIREBASE_API FCancelParam();
};

