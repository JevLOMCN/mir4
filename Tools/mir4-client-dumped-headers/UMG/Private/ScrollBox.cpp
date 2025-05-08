#include "ScrollBox.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EWidgetClipping -FallbackName=EWidgetClipping

UScrollBox::UScrollBox() {
    this->bIsVariable = false;
    this->Clipping = EWidgetClipping::ClipToBounds;
    this->Style = NULL;
    this->BarStyle = NULL;
    this->Orientation = Orient_Vertical;
    this->ScrollBarVisibility = ESlateVisibility::Visible;
    this->ConsumeMouseWheel = EConsumeMouseWheel::WhenScrollingPossible;
    this->AlwaysShowScrollbar = false;
    this->AlwaysShowScrollbarTrack = false;
    this->AllowOverscroll = true;
    this->bAnimateWheelScrolling = false;
    this->NavigationDestination = EDescendantScrollDestination::IntoView;
    this->NavigationScrollPadding = 0.00f;
    this->bAllowRightClickDragScrolling = true;
    this->bAllowXScrollOverScroll = false;
    this->WheelScrollMultiplier = 1.00f;
}

void UScrollBox::SetWheelScrollMultiplier(float NewWheelScrollMultiplier) {
}

void UScrollBox::SetScrollOffset(float NewScrollOffset) {
}

void UScrollBox::SetScrollbarVisibility(ESlateVisibility NewScrollBarVisibility) {
}

void UScrollBox::SetScrollbarThickness(const FVector2D& NewScrollbarThickness) {
}

void UScrollBox::SetScrollbarPadding(const FMargin& NewScrollbarPadding) {
}

void UScrollBox::SetOrientation(TEnumAsByte<EOrientation> NewOrientation) {
}

void UScrollBox::SetConsumeMouseWheel(EConsumeMouseWheel NewConsumeMouseWheel) {
}

void UScrollBox::SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling) {
}

void UScrollBox::SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar) {
}

void UScrollBox::SetAllowOverscroll(bool NewAllowOverscroll) {
}

void UScrollBox::ScrollWidgetIntoView(UWidget* WidgetToFind, bool AnimateScroll, EDescendantScrollDestination ScrollDestination) {
}

void UScrollBox::ScrollToStart() {
}

void UScrollBox::ScrollToEnd() {
}

float UScrollBox::GetViewOffsetFraction() const {
    return 0.0f;
}

float UScrollBox::GetScrollOffsetOfEnd() const {
    return 0.0f;
}

float UScrollBox::GetScrollOffset() const {
    return 0.0f;
}

void UScrollBox::EndInertialScrolling() {
}


