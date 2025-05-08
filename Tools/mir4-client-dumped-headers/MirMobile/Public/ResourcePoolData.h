#pragma once
#include "CoreMinimal.h"
#include "ResourcePoolData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FResourcePoolData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* pResourceObject;
    
    MIRMOBILE_API FResourcePoolData();
};

