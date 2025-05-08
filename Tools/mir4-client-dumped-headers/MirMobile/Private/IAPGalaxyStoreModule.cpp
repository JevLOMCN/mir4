#include "IAPGalaxyStoreModule.h"

UIAPGalaxyStoreModule::UIAPGalaxyStoreModule() {
}

void UIAPGalaxyStoreModule::OnResponsePayment(bool bSuccess, int32 ErrorCode, const FIAPProductData& ProductData) {
}

void UIAPGalaxyStoreModule::OnResponseOwnedProduct(bool bSuccess, int32 ErrorCode, const TArray<FIAPProductData>& ProductList) {
}

void UIAPGalaxyStoreModule::OnResponseGetProducts(bool bSuccess, int32 ErrorCode, const FIAPProductData& ProductData) {
}

void UIAPGalaxyStoreModule::OnResponseConsumePurchasedItems(bool bSuccess, int32 ErrorCode, const FIAPProductData& ProductData) {
}


