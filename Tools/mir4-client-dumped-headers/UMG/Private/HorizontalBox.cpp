#include "HorizontalBox.h"
#include "ESlateVisibility.h"

UHorizontalBox::UHorizontalBox() {
    this->bIsVariable = false;
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
}

UHorizontalBoxSlot* UHorizontalBox::AddChildToHorizontalBox(UWidget* Content) {
    return NULL;
}


