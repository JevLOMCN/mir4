#include "Overlay.h"
#include "ESlateVisibility.h"

UOverlay::UOverlay() {
    this->bIsVariable = false;
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
}

UOverlaySlot* UOverlay::AddChildToOverlay(UWidget* Content) {
    return NULL;
}


