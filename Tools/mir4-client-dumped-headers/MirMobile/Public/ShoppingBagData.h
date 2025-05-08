#pragma once
#include "CoreMinimal.h"
#include "ShoppingBagData.generated.h"

USTRUCT(BlueprintType)
struct FShoppingBagData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GoodsID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GoodsCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double HydraCost;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 TimeTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSelected;
    
    MIRMOBILE_API FShoppingBagData();
};

