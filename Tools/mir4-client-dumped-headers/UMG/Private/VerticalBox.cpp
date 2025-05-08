#include "VerticalBox.h"
#include "ESlateVisibility.h"

UVerticalBox::UVerticalBox() {
    this->bIsVariable = false;
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
}

UVerticalBoxSlot* UVerticalBox::AddChildToVerticalBox(UWidget* Content) {
    return NULL;
}


