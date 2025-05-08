#include "MM_PopUp_Quest_Delivery.h"

UMM_PopUp_Quest_Delivery::UMM_PopUp_Quest_Delivery() {
    this->m_CloseBtn = NULL;
    this->m_OkBtn = NULL;
    this->m_PopupTitle = NULL;
    this->m_QuestInfo = NULL;
    this->m_OpenAni = NULL;
    this->m_CloseAni = NULL;
    this->m_DeliveryToStr = 1006444;
    this->m_DoingDeliveryToStr = 1006445;
    this->m_TitleWithCountToStr = 1006433;
    this->m_CompleteToStr = 1006536;
    this->m_NotEnoughToStr = 1006537;
}

float UMM_PopUp_Quest_Delivery::PlayCloseAni() {
    return 0.0f;
}

void UMM_PopUp_Quest_Delivery::OnClickDelivery() {
}

void UMM_PopUp_Quest_Delivery::OnClickClose() {
}


