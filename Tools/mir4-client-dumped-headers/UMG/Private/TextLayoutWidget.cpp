#include "TextLayoutWidget.h"

UTextLayoutWidget::UTextLayoutWidget() {
    this->Justification = ETextJustify::Left;
    this->WrappingPolicy = ETextWrappingPolicy::DefaultWrapping;
    this->AutoWrapText = false;
    this->WrapTextAt = 0.00f;
    this->LineHeightPercentage = 1.00f;
}

void UTextLayoutWidget::SetJustification(TEnumAsByte<ETextJustify::Type> InJustification) {
}


