#include "ListViewBase.h"

UListViewBase::UListViewBase() {
    this->ScrollBarVisibility = ESlateVisibility::Visible;
    this->AlwaysShowScrollbar = false;
    this->AlwaysShowScrollbarTrack = false;
    this->EntryWidgetClass = NULL;
    this->WheelScrollMultiplier = 1.00f;
    this->bEnableScrollAnimation = false;
    this->bEnableFixedLineOffset = false;
    this->FixedLineScrollOffset = 0.00f;
}

void UListViewBase::SetWheelScrollMultiplier(float NewWheelScrollMultiplier) {
}

void UListViewBase::SetScrollOffset(const float InScrollOffset) {
}

void UListViewBase::SetScrollbarVisibility(ESlateVisibility InVisibility) {
}

void UListViewBase::SetScrollbarThickness(const FVector2D& NewScrollbarThickness) {
}

void UListViewBase::SetScrollbarPadding(const FMargin& NewScrollbarPadding) {
}

void UListViewBase::SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar) {
}

void UListViewBase::ScrollToTop() {
}

void UListViewBase::ScrollToBottom() {
}

void UListViewBase::RequestRefresh() {
}

void UListViewBase::RegenerateAllEntries() {
}

float UListViewBase::GetScrollOffset() {
    return 0.0f;
}

TArray<UUserWidget*> UListViewBase::GetDisplayedEntryWidgets() const {
    return TArray<UUserWidget*>();
}


