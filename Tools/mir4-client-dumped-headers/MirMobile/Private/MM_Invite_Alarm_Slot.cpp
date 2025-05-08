#include "MM_Invite_Alarm_Slot.h"

UMM_Invite_Alarm_Slot::UMM_Invite_Alarm_Slot() {
    this->TXT_COLOR_PARTY_TYPE_5 = TEXT("94d5ff");
    this->TXT_COLOR_PARTY_TYPE_15 = TEXT("eba6ff");
    this->TXT_COLOR_PARTY_TYPE_DUNGEON = TEXT("39a3e6");
    this->TXT_COLOR_PARTY_TYPE_BOSS = TEXT("ff624b");
    this->TXT_COLOR_PARTY_TYPE_HELL = TEXT("f4bb30");
    this->m_Img_Class = NULL;
    this->m_Txt_Level = NULL;
    this->m_Txt_Nickname = NULL;
    this->m_Txt_CombatPoint = NULL;
    this->m_Img_Frame_Guild = NULL;
    this->m_Img_Symbol_Guild = NULL;
    this->m_Txt_GuildName = NULL;
    this->m_Txt_Time = NULL;
    this->m_Txt_Alarm = NULL;
    this->m_Img_Timer = NULL;
    this->m_Txt_PartyType = NULL;
    this->m_Txt_StageName = NULL;
    this->m_CB_Accept = NULL;
    this->m_CB_Refuse = NULL;
}

void UMM_Invite_Alarm_Slot::OnClickRefuse() {
}

void UMM_Invite_Alarm_Slot::OnClickAccept() {
}


