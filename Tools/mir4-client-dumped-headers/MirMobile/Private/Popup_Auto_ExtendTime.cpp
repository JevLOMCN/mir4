#include "Popup_Auto_ExtendTime.h"

UPopup_Auto_ExtendTime::UPopup_Auto_ExtendTime() {
    this->btnClose = NULL;
    this->txtTile = NULL;
    this->Common_ToolTipBtn = NULL;
    this->optSelectMode = NULL;
    this->swtModeSelector = NULL;
    this->swtAutoModeSelector = NULL;
    this->txtFixAutoExtending = NULL;
    this->wgtExtendCountSlider = NULL;
    this->txtUseGoldCount = NULL;
    this->optSwtUseGold = NULL;
    this->txtFixUseOrder = NULL;
    this->canUseTicket = NULL;
    this->imgTicket = NULL;
    this->ImgTicketNext = NULL;
    this->canUseGold = NULL;
    this->imgGold = NULL;
    this->imgGoldNext = NULL;
    this->canUseItem = NULL;
    this->imgItem = NULL;
    this->btnStartExtend = NULL;
    this->btnStopExtend = NULL;
    this->txtFixLeftExendCount = NULL;
    this->txtLeftExtendValue = NULL;
    this->txtFixCurExtendCost = NULL;
    this->txtCurExtendValue = NULL;
    this->imgCurUsingCost = NULL;
    this->MatSlot = NULL;
    this->txtLeftTime = NULL;
    this->txtFixNotice = NULL;
    this->hrzLimitGoldCount = NULL;
    this->txtLimitGoldCount = NULL;
    this->btnExtendTicket = NULL;
    this->btnExtendGold = NULL;
    this->btnExtendItem = NULL;
}

void UPopup_Auto_ExtendTime::OnSelectedUseGold(int32 idx) {
}

void UPopup_Auto_ExtendTime::OnSelectedExtenMode(int32 idx) {
}

void UPopup_Auto_ExtendTime::OnClickExtendStop() {
}

void UPopup_Auto_ExtendTime::OnClickExtendStart() {
}

void UPopup_Auto_ExtendTime::OnClickExtendByTicket() {
}

void UPopup_Auto_ExtendTime::OnClickExtendByItem() {
}

void UPopup_Auto_ExtendTime::OnClickExtendByGold() {
}

void UPopup_Auto_ExtendTime::OnClickClose() {
}

void UPopup_Auto_ExtendTime::OnChangeCount(int64 Count) {
}


