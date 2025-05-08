#include "MMRichTextBox.h"

UMMRichTextBox::UMMRichTextBox() {
    this->MinDesiredWidth = 0.00f;
    this->Justification = ETextJustify::Left;
    this->LineHeightPercentage = 0.00f;
    this->AutoWrapText = false;
    this->WrapTextAt = 0.00f;
    this->WrappingPolicy = ETextWrappingPolicy::DefaultWrapping;
    this->m_RTxt_Content = NULL;
}

void UMMRichTextBox::SetText(FText InText) {
}

void UMMRichTextBox::SetRichTextColor(FLinearColor InColorAndOpacity) {
}

void UMMRichTextBox::SetFont(FSlateFontInfo InFontInfo) {
}

FText UMMRichTextBox::GetText() const {
    return FText::GetEmpty();
}


