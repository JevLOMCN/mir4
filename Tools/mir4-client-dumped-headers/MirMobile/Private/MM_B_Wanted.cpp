#include "MM_B_Wanted.h"

UMM_B_Wanted::UMM_B_Wanted() {
    this->m_Tab_Vertical = NULL;
    this->m_Btn_CombatPoint_Menu = NULL;
    this->m_Img_CombatPoint_Menu_Arrow = NULL;
    this->m_Btn_Reward_Menu = NULL;
    this->m_Img_Reward_Menu_Arrow = NULL;
    this->m_Btn_Chase_Menu = NULL;
    this->m_Img_Chase_Menu_Arrow = NULL;
    this->m_ListView_WantedList = NULL;
    this->m_Empty_Notice = NULL;
    this->m_pBtnInfo = NULL;
}

void UMM_B_Wanted::ReqWantedList(int32 ListType, int32 SortType, int32 PageIndex) {
}

void UMM_B_Wanted::OnClickVrtTab(int32 iIndex, bool bLocked) {
}

void UMM_B_Wanted::OnClickSortByReward() {
}

void UMM_B_Wanted::OnClickSortByCombatPoint() {
}

void UMM_B_Wanted::OnClickSortByChaseTime() {
}

void UMM_B_Wanted::OnClickInfo() {
}


