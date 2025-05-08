#include "WrapBox.h"
#include "ESlateVisibility.h"

UWrapBox::UWrapBox() {
    this->bIsVariable = false;
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
    this->WrapWidth = 500.00f;
    this->bExplicitWrapWidth = false;
}

void UWrapBox::SetInnerSlotPadding(FVector2D InPadding) {
}

UWrapBoxSlot* UWrapBox::AddChildToWrapBox(UWidget* Content) {
    return NULL;
}


