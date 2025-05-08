#pragma once
#include "CoreMinimal.h"
#include "AnalyticsParam.generated.h"

class UFirebaseVariant;

USTRUCT(BlueprintType)
struct FAnalyticsParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFirebaseVariant* Value;
    
    EASYFIREBASE_API FAnalyticsParam();
};

