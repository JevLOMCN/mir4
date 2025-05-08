#pragma once
#include "CoreMinimal.h"
#include "IAPMarketProductData.h"
#include "IAPProductData.h"
#include "IAPStoreModuleBase.h"
#include "IAPHuaweiStoreModule.generated.h"

UCLASS(Blueprintable)
class UIAPHuaweiStoreModule : public UIAPStoreModuleBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FIAPProductData> m_OwnedProductList;
    
public:
    UIAPHuaweiStoreModule();

protected:
    UFUNCTION(BlueprintCallable)
    void OnResponsePayment(bool bSuccess, int32 ErrorCode, const FIAPProductData& ProductData);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnResponseOwnedProduct(bool bSuccess, int32 ErrorCode, const TArray<FIAPProductData>& ProductList);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnResponseGetProducts(bool bSuccess, int32 ErrorCode, const TArray<FIAPMarketProductData>& ProductData);
    
    UFUNCTION(BlueprintCallable)
    void OnResponseConsumePurchasedItems(bool bSuccess, int32 ErrorCode, const FIAPProductData& ProductData);
    
};

