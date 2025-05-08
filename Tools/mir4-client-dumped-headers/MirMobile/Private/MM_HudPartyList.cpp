#include "MM_HudPartyList.h"

UMM_HudPartyList::UMM_HudPartyList() {
    this->m_fBottomPadding = 0.00f;
    this->m_AniStart = NULL;
    this->m_AniEnd = NULL;
    this->SlotSizeY = 40.00f;
    this->MaxSlotSizeY = 192.00f;
    this->m_ScrollBox_Party = NULL;
    this->m_Grid_Squad = NULL;
    this->m_arPartyUserSlot[0] = NULL;
    this->m_arPartyUserSlot[1] = NULL;
    this->m_arPartyUserSlot[2] = NULL;
    this->m_arPartyUserSlot[3] = NULL;
    this->m_arSquadUserSlot[0] = NULL;
    this->m_arSquadUserSlot[1] = NULL;
    this->m_arSquadUserSlot[2] = NULL;
    this->m_arSquadUserSlot[3] = NULL;
    this->m_arSquadUserSlot[4] = NULL;
    this->m_arSquadUserSlot[5] = NULL;
    this->m_arSquadUserSlot[6] = NULL;
    this->m_arSquadUserSlot[7] = NULL;
    this->m_arSquadUserSlot[8] = NULL;
    this->m_arSquadUserSlot[9] = NULL;
    this->m_arSquadUserSlot[10] = NULL;
    this->m_arSquadUserSlot[11] = NULL;
    this->m_arSquadUserSlot[12] = NULL;
    this->m_arSquadUserSlot[13] = NULL;
    this->m_arOtherUserSlot[0] = NULL;
    this->m_arOtherUserSlot[1] = NULL;
    this->m_arOtherUserSlot[2] = NULL;
    this->m_arOtherUserSlot[3] = NULL;
    this->m_arOtherUserSlot[4] = NULL;
    this->m_arOtherUserSlot[5] = NULL;
    this->m_arOtherUserSlot[6] = NULL;
    this->m_arOtherUserSlot[7] = NULL;
    this->m_arOtherUserSlot[8] = NULL;
    this->m_arOtherUserSlot[9] = NULL;
    this->m_arOtherUserSlot[10] = NULL;
    this->m_arOtherUserSlot[11] = NULL;
    this->m_arOtherUserSlot[12] = NULL;
    this->m_arOtherUserSlot[13] = NULL;
    this->m_arOtherUserSlot[14] = NULL;
    this->m_Manage_Make = NULL;
}


