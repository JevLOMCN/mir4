#include "MM_Popup_DominionTitle.h"

UMM_Popup_DominionTitle::UMM_Popup_DominionTitle() {
    this->m_pBtnBackGround = NULL;
    this->m_pToolTip = NULL;
    this->m_pBtnClose = NULL;
    this->m_pTxtTitle = NULL;
    this->m_pScrollViewList = NULL;
    this->m_iDominionID = 0;
    this->m_iSelectedPBSID = 0;
    this->m_iTargetUserUID = 0;
}

void UMM_Popup_DominionTitle::OnSelectDelegate(int32 iPBS_ID) {
}

void UMM_Popup_DominionTitle::OnClickClose() {
}

void UMM_Popup_DominionTitle::OnClickBG() {
}


