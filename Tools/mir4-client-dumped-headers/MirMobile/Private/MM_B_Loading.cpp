#include "MM_B_Loading.h"

UMM_B_Loading::UMM_B_Loading() {
    this->m_fProgressSpeed = 1.00f;
    this->m_AniHide_ImgLoadingPre = NULL;
    this->m_Can_Main = NULL;
    this->m_Can_Pre = NULL;
    this->m_Img_Loading_Cur = NULL;
    this->m_Img_Loading_Pre = NULL;
    this->m_RTxt_ToolTipTitle_Cur = NULL;
    this->m_RTxt_ToolTipContent_Cur = NULL;
    this->m_RTxt_ToolTipTitle_Pre = NULL;
    this->m_RTxt_ToolTipContent_Pre = NULL;
    this->m_LoadingInner = NULL;
    this->m_CB_Left = NULL;
    this->m_CB_Right = NULL;
}

void UMM_B_Loading::OpenFadeInEnd() {
}

void UMM_B_Loading::OnClickRight() {
}

void UMM_B_Loading::OnClickLeft() {
}


