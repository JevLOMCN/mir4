#include "MM_Popup_Coupon.h"

UMM_Popup_Coupon::UMM_Popup_Coupon() {
    this->m_fUnableConfirmBtnTime = 3.00f;
    this->m_Btn_Screen = NULL;
    this->m_CB_Close = NULL;
    this->m_Edit_Input = NULL;
    this->m_CB_Cancel = NULL;
    this->m_CB_Confirm = NULL;
    this->m_Ani_Start = NULL;
    this->m_Ani_End = NULL;
    this->m_Img_Throbber = NULL;
    this->m_Ani_Throbber = NULL;
}

void UMM_Popup_Coupon::OnTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> ETextCommit) {
}

void UMM_Popup_Coupon::OnTextChanged_EditInput(const FText& Text) {
}

void UMM_Popup_Coupon::OnClick_Screen() {
}

void UMM_Popup_Coupon::OnClick_Confirm() {
}

void UMM_Popup_Coupon::OnClick_Close() {
}

void UMM_Popup_Coupon::OnClick_Cancel() {
}


