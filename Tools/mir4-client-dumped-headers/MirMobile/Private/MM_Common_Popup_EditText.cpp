#include "MM_Common_Popup_EditText.h"

UMM_Common_Popup_EditText::UMM_Common_Popup_EditText() {
    this->Txt_Title = NULL;
    this->EditTxt_Message = NULL;
    this->Btn_First = NULL;
    this->Btn_Second = NULL;
    this->btn_close = NULL;
    this->Btn_BG = NULL;
}

void UMM_Common_Popup_EditText::OnTextCommitted(const FText& text_, TEnumAsByte<ETextCommit::Type> commit_method_) {
}

void UMM_Common_Popup_EditText::OnClickSecondButton() {
}

void UMM_Common_Popup_EditText::OnClickFirstButton() {
}

void UMM_Common_Popup_EditText::OnClickClose() {
}


