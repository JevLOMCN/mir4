#include "ScaleBox.h"
#include "ESlateVisibility.h"

UScaleBox::UScaleBox() {
    this->bIsVariable = false;
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
    this->Stretch = EStretch::ScaleToFit;
    this->StretchDirection = EStretchDirection::Both;
    this->UserSpecifiedScale = 1.00f;
    this->IgnoreInheritedScale = false;
}

void UScaleBox::SetUserSpecifiedScale(float InUserSpecifiedScale) {
}

void UScaleBox::SetStretchDirection(TEnumAsByte<EStretchDirection::Type> InStretchDirection) {
}

void UScaleBox::SetStretch(TEnumAsByte<EStretch::Type> InStretch) {
}

void UScaleBox::SetIgnoreInheritedScale(bool bInIgnoreInheritedScale) {
}


