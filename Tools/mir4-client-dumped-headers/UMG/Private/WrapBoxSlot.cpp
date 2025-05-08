#include "WrapBoxSlot.h"

UWrapBoxSlot::UWrapBoxSlot() {
    this->bFillEmptySpace = false;
    this->FillSpanWhenLessThan = 0.00f;
    this->HorizontalAlignment = HAlign_Fill;
    this->VerticalAlignment = VAlign_Fill;
}

void UWrapBoxSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
}

void UWrapBoxSlot::SetPadding(FMargin InPadding) {
}

void UWrapBoxSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
}

void UWrapBoxSlot::SetFillSpanWhenLessThan(float InFillSpanWhenLessThan) {
}

void UWrapBoxSlot::SetFillEmptySpace(bool InbFillEmptySpace) {
}


