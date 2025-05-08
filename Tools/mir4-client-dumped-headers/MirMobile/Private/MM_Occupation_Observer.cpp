#include "MM_Occupation_Observer.h"

UMM_Occupation_Observer::UMM_Occupation_Observer() {
    this->m_Txt_RemainTime = NULL;
    this->m_Txt_Defence_Guild_Name = NULL;
    this->m_Txt_Offence_Guild_Name = NULL;
    this->m_GuildIcon_Defence = NULL;
    this->m_GuildIcon_Offence = NULL;
    this->m_Txt_Catapult_Count = NULL;
    this->m_Txt_Gate_HP = NULL;
    this->m_Txt_Target_Capture_HP = NULL;
    this->m_Txt_Defence_Flag_Count = NULL;
    this->m_Txt_Siege_Tower_Count = NULL;
    this->m_Txt_Offence_Flag_Count = NULL;
    this->m_Txt_ServerName = NULL;
    this->m_KillLog_Defence = NULL;
    this->m_KillLog_Offence = NULL;
    this->m_Btn_Gate = NULL;
    this->m_Btn_Capture = NULL;
    this->m_SiegeObserver_HP = NULL;
}

void UMM_Occupation_Observer::OnClickGate() {
}

void UMM_Occupation_Observer::OnClickCapture() {
}


