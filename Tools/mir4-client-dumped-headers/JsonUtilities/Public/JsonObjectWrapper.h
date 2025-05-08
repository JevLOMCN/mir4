#pragma once
#include "CoreMinimal.h"
#include "JsonObjectWrapper.generated.h"

USTRUCT(BlueprintType)
struct JSONUTILITIES_API FJsonObjectWrapper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString JsonString;
    
    FJsonObjectWrapper();
};

