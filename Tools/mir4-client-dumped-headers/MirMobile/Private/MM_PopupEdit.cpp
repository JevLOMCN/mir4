#include "MM_PopupEdit.h"

UMM_PopupEdit::UMM_PopupEdit() {
    this->cp_change = NULL;
    this->cp_reset = NULL;
    this->Txt_Title = NULL;
    this->edit_txt = NULL;
    this->Btn_Cancel = NULL;
    this->btn_confirm = NULL;
    this->btn_close = NULL;
    this->txt_custom_title_reset = NULL;
}

void UMM_PopupEdit::OnTextCommitted(const FText& text_, TEnumAsByte<ETextCommit::Type> commit_method_) {
}

void UMM_PopupEdit::OnClickConfirm() {
}

void UMM_PopupEdit::OnClickCancel() {
}


