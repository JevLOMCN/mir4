#include "MM_HudTargetSubMenu.h"

UMM_HudTargetSubMenu::UMM_HudTargetSubMenu() {
    this->m_TargetType = 0;
    this->m_StrID_Info = 1034128;
    this->m_StrID_Talk = 1034129;
    this->m_StrID_PartyInvite = 1034132;
    this->m_StrID_PartyKickout = 1034133;
    this->m_StrID_Duel = 1034130;
    this->m_StrID_Attack = 1034131;
    this->m_pTextInfo = NULL;
    this->m_pBtnInfo = NULL;
    this->m_pTextTalk = NULL;
    this->m_pBtnTalk = NULL;
    this->m_pTextParty = NULL;
    this->m_pBtnParty = NULL;
    this->m_pTextDuel = NULL;
    this->m_pBtnDuel = NULL;
    this->m_pTextAttack = NULL;
    this->m_pBtnAttack = NULL;
    this->m_pCanGuildMark = NULL;
    this->m_pBtnGuildMark = NULL;
}

void UMM_HudTargetSubMenu::OnClickTargetTalkButton() {
}

void UMM_HudTargetSubMenu::OnClickTargetPartyButton() {
}

void UMM_HudTargetSubMenu::OnClickTargetInfoButton() {
}

void UMM_HudTargetSubMenu::OnClickTargetGuildMarkButton() {
}

void UMM_HudTargetSubMenu::OnClickTargetDuelButton() {
}

void UMM_HudTargetSubMenu::OnClickTargetAttackButton() {
}


