#include "MM_PopupGuildGive.h"

UMM_PopupGuildGive::UMM_PopupGuildGive() {
    this->btn_close = NULL;
    this->Btn_Cancel = NULL;
    this->btn_confirm = NULL;
    this->btn_confirm_lock = NULL;
    this->Txt_Title = NULL;
    this->txt_send_name = NULL;
    this->txt_send = NULL;
    this->txt_recv = NULL;
    this->img_send = NULL;
    this->img_recv = NULL;
    this->txt_total_give_count = NULL;
    this->txt_total_give_count_value = NULL;
    this->img_total_give_cost = NULL;
    this->txt_total_give_cost = NULL;
    this->txt_total_give_cost_value = NULL;
    this->img_possession = NULL;
    this->txt_possession = NULL;
    this->txt_possession_value = NULL;
    this->txt_commission = NULL;
    this->txt_commission_value = NULL;
    this->item_make_slider = NULL;
    this->switcher = NULL;
    this->img_dev = NULL;
    this->txt_dev = NULL;
    this->m_pToolTip = NULL;
    this->img_give_limit = NULL;
    this->txt_give_limit = NULL;
}

void UMM_PopupGuildGive::OnClickConfirm() {
}

void UMM_PopupGuildGive::OnClickClose() {
}

void UMM_PopupGuildGive::OnChangeCount(int64 count_) {
}


