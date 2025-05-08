#include "AlignedWrapBoxSlot.h"

UAlignedWrapBoxSlot::UAlignedWrapBoxSlot() {
    this->bFillEmptySpace = false;
    this->FillSpanWhenLessThan = 0.00f;
    this->HorizontalAlignment = HAlign_Fill;
    this->VerticalAlignment = VAlign_Fill;
}

void UAlignedWrapBoxSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
}

void UAlignedWrapBoxSlot::SetPadding(FMargin InPadding) {
}

void UAlignedWrapBoxSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
}

void UAlignedWrapBoxSlot::SetFillSpanWhenLessThan(float InFillSpanWhenLessThan) {
}

void UAlignedWrapBoxSlot::SetFillEmptySpace(bool InbFillEmptySpace) {
}


