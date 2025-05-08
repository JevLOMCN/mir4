#include "MM_Popup_GuildInvite.h"

UMM_Popup_GuildInvite::UMM_Popup_GuildInvite() {
    this->btn_close = NULL;
    this->btn_search = NULL;
    this->btn_confirm = NULL;
    this->btn_refresh = NULL;
    this->sb_recommend = NULL;
    this->notice = NULL;
    this->edit_txt_search = NULL;
    this->cp_invite = NULL;
    this->cp_search = NULL;
    this->btn_prev = NULL;
    this->btn_next = NULL;
    this->txt_page = NULL;
    this->btn_search_cancel = NULL;
    this->btn_confirm_search = NULL;
}

void UMM_Popup_GuildInvite::OnTextCommitted(const FText& text_, TEnumAsByte<ETextCommit::Type> commit_method_) {
}

void UMM_Popup_GuildInvite::OnClickSearch() {
}

void UMM_Popup_GuildInvite::OnClickRefresh() {
}

void UMM_Popup_GuildInvite::OnClickPrev() {
}

void UMM_Popup_GuildInvite::OnClickNext() {
}

void UMM_Popup_GuildInvite::OnClickClose() {
}


