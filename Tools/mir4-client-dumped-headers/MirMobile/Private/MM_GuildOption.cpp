#include "MM_GuildOption.h"

UMM_GuildOption::UMM_GuildOption() {
    this->vertical_set = NULL;
    this->cp_option = NULL;
    this->cp_invited = NULL;
    this->cp_history = NULL;
    this->txt_guild_name = NULL;
    this->txt_guild_leader = NULL;
    this->txt_members = NULL;
    this->btn_mark_change = NULL;
    this->btn_name_change = NULL;
    this->checkbox_join = NULL;
    this->checkbox_alliance = NULL;
    this->btn_keypad = NULL;
    this->txt_power_point = NULL;
    this->gow_invite = NULL;
    this->gow_alliance = NULL;
    this->gow_war = NULL;
    this->ctb_war = NULL;
    this->ctb_infamy = NULL;
    this->ctb_cooperation = NULL;
    this->ctb_free = NULL;
    this->ctb_permission = NULL;
    this->btn_destroy = NULL;
    this->btn_leave = NULL;
    this->btn_group_rebuilding = NULL;
    this->btn_option_change = NULL;
    this->sb_join_request = NULL;
    this->sb_guild_history = NULL;
    this->btn_invite_edit = NULL;
    this->txt_count = NULL;
    this->Img_Symbol = NULL;
    this->img_frame = NULL;
    this->bn_empty = NULL;
    this->btn_symbol_history_prev = NULL;
    this->btn_symbol_history_next = NULL;
    this->txt_history_curr_page = NULL;
    this->txt_history_group = NULL;
    this->cb_history_group = NULL;
    this->cp_history_group = NULL;
    this->btn_history_all = NULL;
    this->btn_history_guild = NULL;
    this->btn_history_diplomacy = NULL;
    this->btn_history_war = NULL;
    this->img_history_all = NULL;
    this->img_history_guild = NULL;
    this->img_history_diplomacy = NULL;
    this->img_history_war = NULL;
    this->bn_empty_history = NULL;
}

void UMM_GuildOption::SetValueByKeyPad(int64 value_) {
}

void UMM_GuildOption::OnClickToggleBtnPermission(bool toggled_) {
}

void UMM_GuildOption::OnClickToggleBtnFree(bool toggled_) {
}

void UMM_GuildOption::OnClickTab(int32 index_, bool bLocked) {
}

void UMM_GuildOption::OnClickOptionChange() {
}

void UMM_GuildOption::OnClickNameChange() {
}

void UMM_GuildOption::OnClickMarkChange() {
}

void UMM_GuildOption::OnClickLeave() {
}

void UMM_GuildOption::OnClickKeyPad() {
}

void UMM_GuildOption::OnClickInviteEdit() {
}

void UMM_GuildOption::OnClickHistoryWar() {
}

void UMM_GuildOption::OnClickHistoryPrev() {
}

void UMM_GuildOption::OnClickHistoryNext() {
}

void UMM_GuildOption::OnClickHistoryGuild() {
}

void UMM_GuildOption::OnClickHistoryGroup(bool checked_) {
}

void UMM_GuildOption::OnClickHistoryDiplomacy() {
}

void UMM_GuildOption::OnClickHistoryAll() {
}

void UMM_GuildOption::OnClickGroupRebuilding() {
}

void UMM_GuildOption::OnClickDestroy() {
}

void UMM_GuildOption::OnClickCheckBoxJoin(bool toggled_) {
}

void UMM_GuildOption::OnClickCheckBoxAlliance(bool toggled_) {
}


