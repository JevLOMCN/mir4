#include "MM_Hud_Chat_ItemShare.h"

UMM_Hud_Chat_ItemShare::UMM_Hud_Chat_ItemShare() {
    this->m_ShareItemInfo = NULL;
    this->Btn_ItemInfo = NULL;
    this->m_Img_CharaIcon = NULL;
    this->m_Txt_SendTime = NULL;
    this->m_Txt_Prefix = NULL;
    this->m_Txt_Nickname = NULL;
    this->m_Txt_ItemName = NULL;
    this->m_SendUserUID = 0;
    this->m_ShareItemUID = 0;
    this->m_SmeltingLv = 0;
    this->m_IsTranscendible = false;
    this->m_TranscendStep = 0;
    this->Btn_UserInteraction = NULL;
    this->m_WorldID = 0;
    this->m_SendWorldID = 0;
}

void UMM_Hud_Chat_ItemShare::OnClickUserInteraction() {
}

void UMM_Hud_Chat_ItemShare::OnClickItemInfo() {
}


