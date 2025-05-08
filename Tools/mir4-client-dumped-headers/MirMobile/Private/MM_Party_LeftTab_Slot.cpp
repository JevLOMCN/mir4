#include "MM_Party_LeftTab_Slot.h"

UMM_Party_LeftTab_Slot::UMM_Party_LeftTab_Slot() {
    this->ETabType = EStageType_PartyLeftTab::Party;
    this->m_Img_Select = NULL;
    this->m_Txt_TabName = NULL;
    this->m_Btn_Main = NULL;
    this->m_Effect_Selected = NULL;
    this->m_Effect_Click = NULL;
}

void UMM_Party_LeftTab_Slot::OnClickMain() {
}


