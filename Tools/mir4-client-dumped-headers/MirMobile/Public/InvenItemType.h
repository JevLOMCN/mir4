#pragma once
#include "CoreMinimal.h"
#include "InvenItemType.generated.h"

USTRUCT(BlueprintType)
struct FInvenItemType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MainType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SubType;
    
    MIRMOBILE_API FInvenItemType();
};

