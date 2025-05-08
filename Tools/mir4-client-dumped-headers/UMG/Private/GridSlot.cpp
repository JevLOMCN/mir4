#include "GridSlot.h"

UGridSlot::UGridSlot() {
    this->HorizontalAlignment = HAlign_Fill;
    this->VerticalAlignment = VAlign_Fill;
    this->Row = 0;
    this->RowSpan = 0;
    this->Column = 0;
    this->ColumnSpan = 0;
    this->Layer = 0;
}

void UGridSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
}

void UGridSlot::SetRowSpan(int32 InRowSpan) {
}

void UGridSlot::SetRow(int32 InRow) {
}

void UGridSlot::SetPadding(FMargin InPadding) {
}

void UGridSlot::SetNudge(FVector2D InNudge) {
}

void UGridSlot::SetLayer(int32 InLayer) {
}

void UGridSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
}

void UGridSlot::SetColumnSpan(int32 InColumnSpan) {
}

void UGridSlot::SetColumn(int32 InColumn) {
}


