#include "MM_Party_ExplainTextField.h"

UMM_Party_ExplainTextField::UMM_Party_ExplainTextField() {
    this->m_ComboBox = NULL;
    this->m_ComboBox_Spacer = NULL;
    this->m_Editable_Explain = NULL;
    this->m_Txt_Explan = NULL;
    this->m_C_Btn_Translation = NULL;
}

void UMM_Party_ExplainTextField::OnTextPartyExplainCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UMM_Party_ExplainTextField::OnComboBoxChanged(const FString& strSelectItem) {
}

void UMM_Party_ExplainTextField::OnClickTranslation() {
}

void UMM_Party_ExplainTextField::OnChangeTextPartyExplain(const FText& Text) {
}


