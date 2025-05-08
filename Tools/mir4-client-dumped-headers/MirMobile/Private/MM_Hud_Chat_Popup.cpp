#include "MM_Hud_Chat_Popup.h"

UMM_Hud_Chat_Popup::UMM_Hud_Chat_Popup() {
    this->m_AniStart = NULL;
    this->m_AniEnd = NULL;
    this->Panel_Main = NULL;
    this->Panel_LeftMenu = NULL;
    this->Chat_TotalIndicator = NULL;
    this->m_ContentWidgetSwitcher = NULL;
    this->m_ChatAreaPopupSwitcher = NULL;
    this->m_ChattingRoom = NULL;
    this->m_SearchWhisper = NULL;
    this->m_EmptyGuild = NULL;
    this->m_PopupMacro = NULL;
    this->m_PopupVoiceOption = NULL;
    this->m_PopupUserInteraction = NULL;
    this->m_CloseButton = NULL;
    this->Toggle_Setting = NULL;
    this->Toggle_WhisperChat = NULL;
    this->Toggle_Menu = NULL;
    this->m_ChatArea = NULL;
    this->m_ListView_ChannelList = NULL;
    this->m_StageInfoButton = NULL;
}

void UMM_Hud_Chat_Popup::OnToggleWhisperChat(bool Checked) {
}

void UMM_Hud_Chat_Popup::OnToggleSetting(bool CheckState) {
}

void UMM_Hud_Chat_Popup::OnToggleMenu(bool Checked) {
}

void UMM_Hud_Chat_Popup::OnClickShareStageInfo() {
}

void UMM_Hud_Chat_Popup::OnClickClose() {
}


