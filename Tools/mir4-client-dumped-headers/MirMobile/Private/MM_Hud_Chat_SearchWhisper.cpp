#include "MM_Hud_Chat_SearchWhisper.h"

UMM_Hud_Chat_SearchWhisper::UMM_Hud_Chat_SearchWhisper() {
    this->Btn_JoinGuild = NULL;
    this->btn_search = NULL;
    this->Panel_Search = NULL;
    this->Panel_EmptyGuild = NULL;
    this->Toggle_Guild = NULL;
    this->Toggle_Party = NULL;
    this->Toggle_Search = NULL;
    this->Txt_Guild = NULL;
    this->Txt_Party = NULL;
    this->Txt_Search = NULL;
    this->EditTxt_SearchNickname = NULL;
    this->m_ListView_UserList = NULL;
    this->empty_notice = NULL;
}

void UMM_Hud_Chat_SearchWhisper::OnToggleSearchTab(bool CheckState) {
}

void UMM_Hud_Chat_SearchWhisper::OnTogglePartyTab(bool CheckState) {
}

void UMM_Hud_Chat_SearchWhisper::OnToggleGuildTab(bool CheckState) {
}

void UMM_Hud_Chat_SearchWhisper::OnTextCommitted(const FText& text_, TEnumAsByte<ETextCommit::Type> commit_method_) {
}

void UMM_Hud_Chat_SearchWhisper::OnClickSearchUser() {
}


