#include "MM_Common_Btn_Base.h"

UMM_Common_Btn_Base::UMM_Common_Btn_Base() {
    this->m_eCommonBtnType = ECommonBtnType::None;
    this->m_fLockTime = 0.30f;
    this->m_bUseClickAnimation = true;
    this->m_WidgetData = NULL;
    this->m_AniClick = NULL;
    this->m_ImgBg = NULL;
    this->m_ImgBgShadow = NULL;
    this->m_BtnMain = NULL;
}

void UMM_Common_Btn_Base::OnReleasedButton() {
}

void UMM_Common_Btn_Base::OnPressedButton() {
}

void UMM_Common_Btn_Base::OnClickButton() {
}


