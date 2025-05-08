#include "MM_RelationQuestDetailList.h"

UMM_RelationQuestDetailList::UMM_RelationQuestDetailList() {
    this->m_ReqRewarToStr = 1051008;
    this->m_Txt_Title = NULL;
    this->m_ListView_RelationList = NULL;
    this->m_Prog_Quest = NULL;
    this->m_Btn_Reward = NULL;
    this->m_Txt_Percent = NULL;
    this->m_Txt_Prog = NULL;
    this->m_Img_Scroll = NULL;
    this->m_Img_Complete = NULL;
    this->RECIEVE_BTN_EFECT_ID = 1000102;
}

int32 UMM_RelationQuestDetailList::Request_ChildMax() {
    return 0;
}

void UMM_RelationQuestDetailList::OnClickRequestReward() {
}


