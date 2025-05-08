#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "IAPProductData.h"
#include "InAppPurchaseBackupData.generated.h"

UCLASS(Blueprintable)
class UInAppPurchaseBackupData : public USaveGame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIAPProductData> m_IAPProductDataList;
    
public:
    UInAppPurchaseBackupData();

};

