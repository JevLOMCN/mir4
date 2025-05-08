#include "IAPOneStoreModule.h"

UIAPOneStoreModule::UIAPOneStoreModule() {
    this->m_pOneStoreGetPurchaseFunction = NULL;
    this->m_pUOneStoreIapProductDetailsFunction = NULL;
    this->m_pUOneStoreIapRequestPurchaseFunction = NULL;
    this->m_pUOneStoreIapConsumePurchaseFunction = NULL;
    this->m_pUOneStoreIapRequestLoginFunction = NULL;
    this->m_pUOneStoreIapRequestUpdateFunction = NULL;
}


