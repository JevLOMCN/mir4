#pragma once
#include "CoreMinimal.h"
#include "FetchProvidersResult.generated.h"

USTRUCT(BlueprintType)
struct FFetchProvidersResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> providers;
    
    EASYFIREBASE_API FFetchProvidersResult();
};

