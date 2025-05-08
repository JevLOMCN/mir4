#include "MM_CustomTitleSetting.h"

UMM_CustomTitleSetting::UMM_CustomTitleSetting() {
    this->STRING_TITLE = 1004451;
    this->STRING_GUIDE_NEW = 1004453;
    this->STRING_GUIDE_PERIOD = 1004466;
    this->STRING_GUIDE_MESSAGE_RESET = 1004467;
    this->STRING_REMAIN_DAY = 1004469;
    this->STRING_REMAIN_HOUR = 1004470;
    this->STRING_REMAIN_SOON = 1004471;
    this->STRING_DEL_TITLE = 1004473;
    this->STRING_BUTTON_CANCEL = 101002;
    this->STRING_BUTTON_OK = 101001;
    this->STRING_ERROR_EMPTY_MATERIAL = 1004472;
    this->STRING_ERROR_RULE_VIOLATION_1 = 1004454;
    this->STRING_ERROR_RULE_VIOLATION_2 = 1004455;
    this->STRING_ERROR_RULE_VIOLATION_3 = 2003008;
    this->Txt_Title = NULL;
    this->Txt_GuideMsg1 = NULL;
    this->Txt_GuideMsg2 = NULL;
    this->Pan_Remain = NULL;
    this->Txt_RemainDay = NULL;
    this->Txt_RemainDay_Del = NULL;
    this->EditTxt_CustomTitle = NULL;
    this->Slot_Material = NULL;
    this->Pan_Edit = NULL;
    this->Btn_Cancel_Edit = NULL;
    this->Btn_Ok_Edit = NULL;
    this->Pan_Del = NULL;
    this->Btn_Cancel_Del = NULL;
    this->Btn_Ok_Del = NULL;
    this->m_CloseBtn = NULL;
}

void UMM_CustomTitleSetting::OnTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UMM_CustomTitleSetting::OnClickOk() {
}

void UMM_CustomTitleSetting::OnClickClose() {
}

void UMM_CustomTitleSetting::OnClickCancel() {
}

void UMM_CustomTitleSetting::OnChangeText(const FText& Text) {
}

void UMM_CustomTitleSetting::ChangeTitle() {
}


