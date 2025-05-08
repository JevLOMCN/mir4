#include "MM_CharacterSelect.h"

UMM_CharacterSelect::UMM_CharacterSelect() {
    this->Panel_DeleteInfo = NULL;
    this->Panel_GuildName = NULL;
    this->Panel_GuildPosition = NULL;
    this->cp_character_info = NULL;
    this->ol_nft_notice = NULL;
    this->Btn_DeleteCharacterCancel = NULL;
    this->Txt_DeleteTime = NULL;
    this->sb_character = NULL;
    this->Spacer = NULL;
    this->Btn_HistoryBack = NULL;
    this->Img_ClassSymbol = NULL;
    this->Pan_Server = NULL;
    this->Txt_Server = NULL;
    this->txt_nickname = NULL;
    this->txt_level = NULL;
    this->Txt_CombatPoint = NULL;
    this->Txt_GuildName = NULL;
    this->Txt_GuildPosition = NULL;
    this->Txt_Position = NULL;
    this->Btn_DeleteCharacter = NULL;
    this->Btn_GameStart = NULL;
    this->Btn_FaceJob = NULL;
    this->Btn_GameOption = NULL;
    this->Btn_VoiceDownload = NULL;
    this->Panel_VoiceDownload = NULL;
    this->Panel_VoiceDownload_Btn = NULL;
    this->Panel_VoiceDownload_Progress = NULL;
    this->btn_nft_import = NULL;
    this->STRING_TIME_DAYS = 1003167;
    this->STRING_TIME_HOURS = 1003168;
    this->STRING_TIME_MINUTES = 1003169;
    this->STRING_TIME_SECONDS = 1003170;
    this->STRING_REMAIN_TIME = 1003171;
    this->STRING_CHARACTER_DELETE_TITLE = 1003178;
    this->STRING_EMPTY_GUILD_NAME = 1003197;
    this->m_CharacterDeleteTime = 0;
    this->m_CurrentDeltaTime = 0.00f;
    this->m_Can_Ping = NULL;
    this->m_Img_Ping = NULL;
    this->m_Txt_Ping = NULL;
}


void UMM_CharacterSelect::OnClickVoiceDownload() {
}

void UMM_CharacterSelect::OnClickNftImport() {
}

void UMM_CharacterSelect::OnClickHistoryBack() {
}

void UMM_CharacterSelect::OnClickGameStart() {
}

void UMM_CharacterSelect::OnClickGameOption() {
}

void UMM_CharacterSelect::OnClickFaceJob() {
}

void UMM_CharacterSelect::OnClickDeleteCharacterCancel() {
}

void UMM_CharacterSelect::OnClickDeleteCharacter() {
}

void UMM_CharacterSelect::OnClassSelect() {
}



