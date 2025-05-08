#pragma once
#include "CoreMinimal.h"
#include "ValueSource.h"
#include "ValueInfo.generated.h"

USTRUCT(BlueprintType)
struct FValueInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ValueSource Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool conversion_successful;
    
    EASYFIREBASE_API FValueInfo();
};

