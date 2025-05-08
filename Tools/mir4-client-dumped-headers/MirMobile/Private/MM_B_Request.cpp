#include "MM_B_Request.h"

UMM_B_Request::UMM_B_Request() {
    this->m_WatchingAllQuestToStr = 1006432;
    this->m_VerticalSet = NULL;
    this->m_HorizontalSet = NULL;
    this->m_ListView_RequestList = NULL;
    this->m_CheckCompleteQuest = NULL;
    this->m_CompleteQuest = NULL;
    this->m_Msg = NULL;
    this->m_Grid_Panel = NULL;
    this->m_pCommNotice_Empty = NULL;
}

void UMM_B_Request::OnClickStageType(int32 SlotIndex, bool bLocked) {
}

void UMM_B_Request::OnClickStage(int32 SlotIndex, bool bLocked) {
}

void UMM_B_Request::OnClickCheckBox(bool Checked) {
}


