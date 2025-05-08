#include "IAPHuaweiStoreModule.h"

UIAPHuaweiStoreModule::UIAPHuaweiStoreModule() {
}

void UIAPHuaweiStoreModule::OnResponsePayment(bool bSuccess, int32 ErrorCode, const FIAPProductData& ProductData) {
}

void UIAPHuaweiStoreModule::OnResponseOwnedProduct(bool bSuccess, int32 ErrorCode, const TArray<FIAPProductData>& ProductList) {
}

void UIAPHuaweiStoreModule::OnResponseGetProducts(bool bSuccess, int32 ErrorCode, const TArray<FIAPMarketProductData>& ProductData) {
}

void UIAPHuaweiStoreModule::OnResponseConsumePurchasedItems(bool bSuccess, int32 ErrorCode, const FIAPProductData& ProductData) {
}


