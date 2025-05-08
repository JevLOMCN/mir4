#include "MM_Map_Detail.h"

UMM_Map_Detail::UMM_Map_Detail() {
    this->m_fMovingRader_ZoomDelta = 10.00f;
    this->m_fMovingRader_SizeDelta = 10.00f;
    this->m_fMovingRader_SizeLimit = 1.00f;
    this->SECTOR_ICON_ID = 910039;
    this->ReserveSound = 0;
    this->m_Player = NULL;
    this->m_Dest = NULL;
    this->m_WaypointDest = NULL;
    this->m_pPlayerSlot = NULL;
    this->m_pDestSlot = NULL;
    this->m_pWaypointDestSlot = NULL;
    this->canFieldBossSlot = NULL;
    this->imgFieldBossSlot = NULL;
    this->m_Grid_Move = NULL;
    this->m_Btn_Move = NULL;
    this->m_Can_SectorGrade = NULL;
    this->m_CanIcon = NULL;
    this->m_TxtMove = NULL;
    this->m_ImgMap = NULL;
    this->m_BtnMain = NULL;
    this->m_AniMove = NULL;
    this->m_Grid_ChatMove = NULL;
    this->m_Btn_ChatMove = NULL;
    this->m_pChatMovetDestSlot = NULL;
    this->m_ChatMoveDest = NULL;
    this->m_Panel_UserName = NULL;
    this->m_Text_UserName = NULL;
}

void UMM_Map_Detail::OnMoveRequest() {
}

void UMM_Map_Detail::OnClickMoveRequest() {
}

void UMM_Map_Detail::OnClickChatMoveRequest() {
}

void UMM_Map_Detail::OnChatMoveRequest() {
}


