#include "MM_UIAction_HUD.h"

UMM_UIAction_HUD::UMM_UIAction_HUD() {
    this->State_HP = EUserGaugeState::Same;
    this->State_MP = EUserGaugeState::Same;
    this->HPRate_Target = 0.00f;
    this->m_iDungeonTracker_TitleID = 0;
    this->m_iDungeonTracker_MessageID = 0;
}

void UMM_UIAction_HUD::OnClickAcceptInviteConfrim() {
}

void UMM_UIAction_HUD::OnClickAcceptChannelWaitingInviteConfrim() {
}


