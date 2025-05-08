#include "ScrollBar.h"

UScrollBar::UScrollBar() {
    this->bIsVariable = false;
    this->Style = NULL;
    this->bAlwaysShowScrollbar = true;
    this->bAlwaysShowScrollbarTrack = true;
    this->Orientation = Orient_Vertical;
}

void UScrollBar::SetState(float InOffsetFraction, float InThumbSizeFraction) {
}


