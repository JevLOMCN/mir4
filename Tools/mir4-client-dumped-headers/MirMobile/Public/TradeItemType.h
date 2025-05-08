#pragma once
#include "CoreMinimal.h"
#include "TradeItemType.generated.h"

USTRUCT(BlueprintType)
struct FTradeItemType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MainType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SubType;
    
    MIRMOBILE_API FTradeItemType();
};

