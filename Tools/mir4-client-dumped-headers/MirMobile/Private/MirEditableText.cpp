#include "MirEditableText.h"

UMirEditableText::UMirEditableText() {
    this->m_StringTableType = EStringTableType::NONE;
    this->m_StringTableID = 0;
}

void UMirEditableText::OnEditableTxtTitleCommitted(const FText& text_, TEnumAsByte<ETextCommit::Type> commit_method_) {
}


