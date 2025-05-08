#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "IAPProductData.h"
#include "ShoppingBagData.h"
#include "InAppPurchaseData.generated.h"

UCLASS(Blueprintable)
class UInAppPurchaseData : public USaveGame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIAPProductData m_IAPProductData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FShoppingBagData> m_ShoppingBagDataMap;
    
public:
    UInAppPurchaseData();

};

