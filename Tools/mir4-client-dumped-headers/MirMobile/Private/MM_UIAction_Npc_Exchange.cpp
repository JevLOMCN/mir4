#include "MM_UIAction_Npc_Exchange.h"

UMM_UIAction_Npc_Exchange::UMM_UIAction_Npc_Exchange() {
    this->m_MainTabIndex = 0;
    this->m_SubTabIndex = 0;
    this->m_SelectItemTID = 0;
    this->m_TargetItemTID = 0;
    this->ReserveNpcID = 0;
    this->m_MakeCount = 0;
    this->m_MakeTID = 0;
    this->m_NPCGroupListID = 0;
    this->MAX_MAKE_COUNT = 999;
    this->STR_ExchangeID = 1026116;
    this->STR_NotEnoughCost = 1026117;
    this->STR_NotEnoughMaterial = 1026118;
}


