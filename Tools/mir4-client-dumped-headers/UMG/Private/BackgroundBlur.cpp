#include "BackgroundBlur.h"
#include "ESlateVisibility.h"

UBackgroundBlur::UBackgroundBlur() {
    this->bIsVariable = false;
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
    this->HorizontalAlignment = HAlign_Fill;
    this->VerticalAlignment = VAlign_Fill;
    this->bApplyAlphaToBlur = true;
    this->BlurStrength = 0.00f;
    this->bOverrideAutoRadiusCalculation = false;
    this->BlurRadius = 0;
}

void UBackgroundBlur::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
}

void UBackgroundBlur::SetPadding(FMargin InPadding) {
}

void UBackgroundBlur::SetLowQualityFallbackBrush(const FSlateBrush& InBrush) {
}

void UBackgroundBlur::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
}

void UBackgroundBlur::SetBlurStrength(float InStrength) {
}

void UBackgroundBlur::SetBlurRadius(int32 InBlurRadius) {
}

void UBackgroundBlur::SetApplyAlphaToBlur(bool bInApplyAlphaToBlur) {
}


