#include "RichTextBox.h"

URichTextBox::URichTextBox() {
    this->MinDesiredWidth = 0.00f;
    this->Justification = ETextJustify::Left;
    this->LineHeightPercentage = 1.00f;
    this->AutoWrapText = false;
    this->WrapTextAt = 0.00f;
    this->WrappingPolicy = ETextWrappingPolicy::DefaultWrapping;
    this->Decorators.AddDefaulted(1);
}

void URichTextBox::SetText(FText InText) {
}

void URichTextBox::SetFont(FSlateFontInfo InFont) {
}

void URichTextBox::SetColor(FLinearColor InColorAndOpacity) {
}

FText URichTextBox::GetText() {
    return FText::GetEmpty();
}


