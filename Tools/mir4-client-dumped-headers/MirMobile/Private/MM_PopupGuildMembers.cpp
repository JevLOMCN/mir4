#include "MM_PopupGuildMembers.h"

UMM_PopupGuildMembers::UMM_PopupGuildMembers() {
    this->btn_bg_close = NULL;
    this->btn_close = NULL;
    this->btn_bg_grade_close = NULL;
    this->btn_grade_popup_open = NULL;
    this->btn_grade_close = NULL;
    this->btn_partner_popup_open = NULL;
    this->btn_authority = NULL;
    this->btn_bg_authority_close = NULL;
    this->btn_authority_popup_open = NULL;
    this->btn_authority_close = NULL;
    this->cp_popup_grade = NULL;
    this->cp_popup_authority = NULL;
    this->btn_grade_cancel = NULL;
    this->btn_grade_confirm = NULL;
    this->btn_authority_confirm = NULL;
    this->img_authority_selected_00 = NULL;
    this->img_authority_selected_01 = NULL;
    this->img_authority_selected_02 = NULL;
    this->img_authority_selected_03 = NULL;
    this->toggle_00 = NULL;
    this->toggle_01 = NULL;
    this->toggle_02 = NULL;
    this->toggle_03 = NULL;
    this->Portrait = NULL;
    this->txt_nickname = NULL;
    this->txt_custom_title = NULL;
    this->txt_level = NULL;
    this->img_combat_power = NULL;
    this->txt_combat_power = NULL;
    this->edit_custom_title = NULL;
    this->btn_edit = NULL;
    this->btn_edit_reset = NULL;
    this->txt_grade = NULL;
    this->txt_buff = NULL;
    this->txt_partner = NULL;
    this->hb_grade = NULL;
    this->btn_confirm = NULL;
    this->btn_kick = NULL;
    this->btn_delegate = NULL;
    this->Btn_Detail = NULL;
    this->overlay_authority_members = NULL;
    this->overlay_authority_inventory = NULL;
    this->overlay_authority_diplomacy = NULL;
    this->overlay_authority_war = NULL;
    this->img_online = NULL;
    this->txt_log_out_time = NULL;
    this->cp_partner = NULL;
    this->cp_authority = NULL;
    this->mImgLock = NULL;
}

void UMM_PopupGuildMembers::OnEditCommitCustomTitle(const FText& text_, TEnumAsByte<ETextCommit::Type> type_) {
}

void UMM_PopupGuildMembers::OnClickToggle03(bool check_) {
}

void UMM_PopupGuildMembers::OnClickToggle02(bool check_) {
}

void UMM_PopupGuildMembers::OnClickToggle01(bool check_) {
}

void UMM_PopupGuildMembers::OnClickToggle00(bool check_) {
}

void UMM_PopupGuildMembers::OnClickSetCustomTitleReset(const FString& edit_text_) {
}

void UMM_PopupGuildMembers::OnClickSetCustomTitle(const FString& edit_text_) {
}

void UMM_PopupGuildMembers::OnClickPartnerOpen() {
}

void UMM_PopupGuildMembers::OnClickKick() {
}

void UMM_PopupGuildMembers::OnClickGradeOpen() {
}

void UMM_PopupGuildMembers::OnClickGradeConfirm() {
}

void UMM_PopupGuildMembers::OnClickGradeClose() {
}

void UMM_PopupGuildMembers::OnClickDetail() {
}

void UMM_PopupGuildMembers::OnClickDelegate() {
}

void UMM_PopupGuildMembers::OnClickCustomTitleResetOpen() {
}

void UMM_PopupGuildMembers::OnClickCustomTitleOpen() {
}

void UMM_PopupGuildMembers::OnClickClose() {
}

void UMM_PopupGuildMembers::OnClickAuthorityOpen() {
}

void UMM_PopupGuildMembers::OnClickAuthorityClose() {
}

void UMM_PopupGuildMembers::OnClickAuthority() {
}

void UMM_PopupGuildMembers::OnChangeCustomTitle(const FText& text_) {
}


