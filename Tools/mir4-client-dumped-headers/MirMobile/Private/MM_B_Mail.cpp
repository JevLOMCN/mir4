#include "MM_B_Mail.h"

UMM_B_Mail::UMM_B_Mail() {
    this->iMailNoticeStringID = 1014006;
    this->ARRAY_STRING_TAB_BUTTON_ID.AddDefaulted(6);
    this->m_CategoryTab = NULL;
    this->m_C_Btn_DeleteAll = NULL;
    this->m_C_Btn_ReceiveAll = NULL;
    this->m_Btn_Refresh = NULL;
    this->m_RTxt_Notice = NULL;
    this->m_C_Btn_Write = NULL;
    this->m_C_Btn_Del = NULL;
    this->m_C_Btn_Func = NULL;
    this->m_C_Btn_SiegeRank = NULL;
    this->m_ListView_MailList = NULL;
    this->m_Canvas_Detail = NULL;
    this->m_C_Empty_Notice = NULL;
    this->m_VrtBox_Normal = NULL;
    this->m_Txt_Title = NULL;
    this->m_Txt_SubTitle = NULL;
    this->m_Txt_SendTime = NULL;
    this->m_RTxt_ExpireTime = NULL;
    this->m_RTxt_Contents = NULL;
    this->m_ScrollBox_Gift = NULL;
    this->m_Img_Draco = NULL;
    this->m_Btn_Translation = NULL;
}

void UMM_B_Mail::OnClickTranslation() {
}

void UMM_B_Mail::OnClickSiegeRankInfo() {
}

void UMM_B_Mail::OnClickMailWrite() {
}

void UMM_B_Mail::OnClickMailDelete() {
}

void UMM_B_Mail::OnClickFunc() {
}

void UMM_B_Mail::OnClickedVerticalTabBtn(int32 idx, bool bLocked) {
}

void UMM_B_Mail::OnClickedRefreshBtn() {
}

void UMM_B_Mail::OnClickedReceiveAllBtn() {
}

void UMM_B_Mail::OnClickDeleteAll() {
}


