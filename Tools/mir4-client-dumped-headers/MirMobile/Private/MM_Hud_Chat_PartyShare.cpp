#include "MM_Hud_Chat_PartyShare.h"

UMM_Hud_Chat_PartyShare::UMM_Hud_Chat_PartyShare() {
    this->m_Img_CharaIcon = NULL;
    this->m_Txt_SendTime = NULL;
    this->m_Txt_Prefix = NULL;
    this->m_Txt_Nickname = NULL;
    this->m_Txt_Official = NULL;
    this->Btn_UserInteraction = NULL;
    this->Btn_PartyInvite = NULL;
    this->m_Img_PartyIcon = NULL;
    this->m_Txt_PartyType = NULL;
    this->m_Txt_TargetStageName = NULL;
    this->m_UserUID = 0;
    this->m_PartyUID = 0;
    this->m_StageType = 0;
    this->m_TargetStageID = 0;
    this->m_MessageWorldID = 0;
    this->m_MessageSendWorldID = 0;
}

void UMM_Hud_Chat_PartyShare::OnClickUserInteraction() {
}

void UMM_Hud_Chat_PartyShare::OnClickPartyInvite() {
}


