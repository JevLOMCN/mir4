#include "HorizontalBoxSlot.h"

UHorizontalBoxSlot::UHorizontalBoxSlot() {
    this->HorizontalAlignment = HAlign_Fill;
    this->VerticalAlignment = VAlign_Fill;
}

void UHorizontalBoxSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
}

void UHorizontalBoxSlot::SetSize(FSlateChildSize InSize) {
}

void UHorizontalBoxSlot::SetPadding(FMargin InPadding) {
}

void UHorizontalBoxSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
}


