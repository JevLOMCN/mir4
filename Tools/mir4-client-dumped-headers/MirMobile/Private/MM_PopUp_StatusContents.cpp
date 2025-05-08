#include "MM_PopUp_StatusContents.h"

UMM_PopUp_StatusContents::UMM_PopUp_StatusContents() {
    this->Exception_Visible = 13;
    this->btn_close = NULL;
    this->Txt_Stat = NULL;
    this->Txt_Value = NULL;
    this->m_StatID = 0;
    this->STRID_COMBINE_NAME = 1037212;
    this->STRID_GO_FAIL = 1037214;
    this->STRING_PERCENT = 1001053;
    this->STRING_PhaseCantUseMenu = 1025003;
}

void UMM_PopUp_StatusContents::OnClickContents_Go(int32 ContentsId) {
}

void UMM_PopUp_StatusContents::OnClickClose() {
}


