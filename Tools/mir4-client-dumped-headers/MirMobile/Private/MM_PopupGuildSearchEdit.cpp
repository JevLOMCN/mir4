#include "MM_PopupGuildSearchEdit.h"

UMM_PopupGuildSearchEdit::UMM_PopupGuildSearchEdit() {
    this->edit_txt_search = NULL;
    this->Btn_Cancel = NULL;
    this->btn_search = NULL;
    this->btn_close = NULL;
    this->sb_world = NULL;
    this->txt_world = NULL;
}

void UMM_PopupGuildSearchEdit::OnTextCommitted(const FText& text_, TEnumAsByte<ETextCommit::Type> commit_method_) {
}

void UMM_PopupGuildSearchEdit::OnClickSearch() {
}

void UMM_PopupGuildSearchEdit::OnClickCancel() {
}


