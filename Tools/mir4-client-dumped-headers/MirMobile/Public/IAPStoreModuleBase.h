#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "EIAPPurchaseState.h"
#include "IAPMarketProductData.h"
#include "IAPProductData.h"
#include "IAPUserRequestData.h"
#include "IAPStoreModuleBase.generated.h"

UCLASS(Blueprintable)
class UIAPStoreModuleBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FIAPUserRequestData m_UserRequestProductData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FIAPProductData m_PurchaseProductData;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<EIAPPurchaseState> m_PurchaseInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> ProcessedTransactionIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> ProcessedTransactionReceipts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle DelayHideBlockScreenTimeHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FIAPMarketProductData> m_MarketProductDataMap;
    
public:
    UIAPStoreModuleBase();

protected:
    UFUNCTION(BlueprintCallable)
    void OnGotoLogin();
    
};

