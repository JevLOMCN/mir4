#include "MM_GetItemWayListSlot_Category.h"

UMM_GetItemWayListSlot_Category::UMM_GetItemWayListSlot_Category() {
    this->m_Btn_Main = NULL;
    this->m_Grid_Effect = NULL;
    this->m_Txt_Name = NULL;
    this->m_Img_Icon = NULL;
    this->m_Img_Lock = NULL;
    this->m_Img_Disable = NULL;
    this->m_Conquest = NULL;
    this->m_Img_Conquest = NULL;
    this->m_Txt_Title = NULL;
    this->Txt_StageTitle = NULL;
    this->m_Btn_Go = NULL;
    this->WSwitcher = NULL;
    this->m_Type = 0;
    this->m_SubType = 0;
    this->m_StageLock = 0;
    this->m_StageEnableCombatPower = false;
    this->STRID_STAGELOCK_LEVEL = 1025004;
    this->STRID_STAGELOCK_QUEST = 1025006;
    this->STRID_STAGELOCK_COMBATPOWER = 1025014;
    this->STRID_STAGELOCK_NOGUILD = 1038102;
    this->STRID_STAGELEVEL = 1038108;
}

void UMM_GetItemWayListSlot_Category::OnClickMain() {
}


