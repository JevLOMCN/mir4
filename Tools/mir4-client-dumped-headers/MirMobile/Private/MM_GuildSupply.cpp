#include "MM_GuildSupply.h"

UMM_GuildSupply::UMM_GuildSupply() {
    this->vertical_set = NULL;
    this->cp_report = NULL;
    this->cp_gift = NULL;
    this->sb_report = NULL;
    this->btn_report_all_recv = NULL;
    this->lv_gift = NULL;
    this->sb_gift = NULL;
    this->txt_gift_level = NULL;
    this->pb_gift_exp = NULL;
    this->txt_gift_exp = NULL;
    this->lst_tab[0] = NULL;
    this->lst_tab[1] = NULL;
    this->txt_box_name = NULL;
    this->img_box = NULL;
    this->hb_box_time = NULL;
    this->btn_box_open = NULL;
    this->cp_box_key = NULL;
    this->txt_box_key = NULL;
    this->txt_box_time = NULL;
    this->pb_box = NULL;
    this->btn_all_recv = NULL;
    this->btn_delete = NULL;
    this->btn_cheat = NULL;
    this->Img_Indicator = NULL;
}

void UMM_GuildSupply::OnClickTab(int32 index_, bool bLocked) {
}

void UMM_GuildSupply::OnClickGuildReportAllRecv() {
}

void UMM_GuildSupply::OnClickGuildGiftInventoryTab(int32 tab_index_) {
}

void UMM_GuildSupply::OnClickGuildGiftDelete() {
}

void UMM_GuildSupply::OnClickGuildGiftBoxOpen() {
}

void UMM_GuildSupply::OnClickGuildGiftAllRecv() {
}

void UMM_GuildSupply::OnClickCheat() {
}


