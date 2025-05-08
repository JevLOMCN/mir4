#pragma once
#include "CoreMinimal.h"
#include "IAPProductData.h"
#include "IAPStoreModuleBase.h"
#include "IAPOneStoreModule.generated.h"

class UObject;

UCLASS(Blueprintable)
class UIAPOneStoreModule : public UIAPStoreModuleBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FIAPProductData> m_OwnedProductList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* m_pOneStoreGetPurchaseFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* m_pUOneStoreIapProductDetailsFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* m_pUOneStoreIapRequestPurchaseFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* m_pUOneStoreIapConsumePurchaseFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* m_pUOneStoreIapRequestLoginFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* m_pUOneStoreIapRequestUpdateFunction;
    
public:
    UIAPOneStoreModule();

};

