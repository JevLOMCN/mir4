#include "WindowTitleBarArea.h"

UWindowTitleBarArea::UWindowTitleBarArea() {
    this->bIsVariable = false;
    this->bWindowButtonsEnabled = false;
    this->bDoubleClickTogglesFullscreen = false;
}

void UWindowTitleBarArea::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
}

void UWindowTitleBarArea::SetPadding(FMargin InPadding) {
}

void UWindowTitleBarArea::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
}


