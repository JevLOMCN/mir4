#pragma once
#include "CoreMinimal.h"
#include "IAPProductData.h"
#include "IAPStoreModuleBase.h"
#include "IAPGalaxyStoreModule.generated.h"

UCLASS(Blueprintable)
class UIAPGalaxyStoreModule : public UIAPStoreModuleBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FIAPProductData> m_OwnedProductList;
    
public:
    UIAPGalaxyStoreModule();

protected:
    UFUNCTION(BlueprintCallable)
    void OnResponsePayment(bool bSuccess, int32 ErrorCode, const FIAPProductData& ProductData);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnResponseOwnedProduct(bool bSuccess, int32 ErrorCode, const TArray<FIAPProductData>& ProductList);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnResponseGetProducts(bool bSuccess, int32 ErrorCode, const FIAPProductData& ProductData);
    
    UFUNCTION(BlueprintCallable)
    void OnResponseConsumePurchasedItems(bool bSuccess, int32 ErrorCode, const FIAPProductData& ProductData);
    
};

