#include "MM_Hud_Chat_TalkMessage.h"

UMM_Hud_Chat_TalkMessage::UMM_Hud_Chat_TalkMessage() {
    this->m_Img_CharaIcon = NULL;
    this->m_Txt_SendTime = NULL;
    this->m_Txt_Prefix = NULL;
    this->m_Txt_Nickname = NULL;
    this->m_Txt_TalkMessage = NULL;
    this->m_RTxt_TalkMessage = NULL;
    this->Btn_UserInteraction = NULL;
    this->m_UserUID = 0;
    this->m_WorldID = 0;
    this->Btn_StageInfo = NULL;
    this->m_Txt_Description = NULL;
    this->m_Txt_Official = NULL;
    this->m_Btn_Translate = NULL;
    this->m_SendWorldID = 0;
}

void UMM_Hud_Chat_TalkMessage::OnClickUserInteraction() {
}

void UMM_Hud_Chat_TalkMessage::OnClickTranslate() {
}

void UMM_Hud_Chat_TalkMessage::OnClickStageInfo() {
}


