#include "AlignedWrapBox.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility

UAlignedWrapBox::UAlignedWrapBox() {
    this->bIsVariable = false;
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
    this->HorizontalAlignment = HAlign_Left;
}

void UAlignedWrapBox::SetInnerSlotPadding(FVector2D InPadding) {
}

void UAlignedWrapBox::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
}

UAlignedWrapBoxSlot* UAlignedWrapBox::AddChildWrapBox(UWidget* Content) {
    return NULL;
}


