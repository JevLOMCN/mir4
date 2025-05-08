#include "MM_PopupCharacterSearchEdit.h"

UMM_PopupCharacterSearchEdit::UMM_PopupCharacterSearchEdit() {
    this->m_pTxtTitle = NULL;
    this->edit_txt_search = NULL;
    this->Btn_Cancel = NULL;
    this->btn_search = NULL;
    this->btn_close = NULL;
}

void UMM_PopupCharacterSearchEdit::OnTextCommitted(const FText& text_, TEnumAsByte<ETextCommit::Type> commit_method_) {
}

void UMM_PopupCharacterSearchEdit::OnClickSearch() {
}

void UMM_PopupCharacterSearchEdit::OnClickCancel() {
}


