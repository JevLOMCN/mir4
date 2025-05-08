#include "MM_SleepMode.h"

UMM_SleepMode::UMM_SleepMode() {
    this->m_AniFade = NULL;
    this->m_iMSTRID_OffSlidSleepMode = 1054001;
    this->m_QuestIconID = 3300001;
    this->m_HpIconID = 3300002;
    this->m_HpPotionIconID = 3300003;
    this->m_MpPotionIconID = 3300005;
    this->m_InvenIconID = 3300004;
    this->m_AddInvenIconID = 100026;
    this->m_ExpIconID = 3300006;
    this->m_DeviceInfo = NULL;
    this->m_pTextHour = NULL;
    this->m_pTextMinute = NULL;
    this->m_pTextOffSlideSleepMode = NULL;
    this->m_pImgPlayerState = NULL;
    this->m_pTextPlayerState = NULL;
    this->m_pImgQuest = NULL;
    this->m_pTextQuest = NULL;
    this->m_pImgCurrectHP = NULL;
    this->m_pTextCurrectHP = NULL;
    this->m_pTextPotionCount = NULL;
    this->m_pTextInvenCount = NULL;
    this->m_pTextMessageCount = NULL;
    this->m_pImgCurrentHP = NULL;
    this->m_pImgPotion = NULL;
    this->m_pImgInven = NULL;
    this->m_pImgMessage = NULL;
    this->m_pImgMpPotion = NULL;
    this->m_pTextMpPotion = NULL;
    this->m_pImgAddItem = NULL;
    this->m_pTextAddItem = NULL;
    this->m_pImgExp = NULL;
    this->m_pTextExp = NULL;
    this->m_pTextExpRatio = NULL;
    this->m_fStopSliderRatio_ExcuteRatio = 0.80f;
    this->m_fStopSliderRatio_AbleRatio = 0.10f;
    this->m_fStopSlider_ActiveTextOpacity = 0.30f;
    this->m_StopSlider = NULL;
    this->m_Img_StopSliderBg = NULL;
}

void UMM_SleepMode::OnDragStopSliderEnd() {
}

void UMM_SleepMode::OnDragStopSliderBegin() {
}

void UMM_SleepMode::OnDragStopSlider(float fRatio) {
}


