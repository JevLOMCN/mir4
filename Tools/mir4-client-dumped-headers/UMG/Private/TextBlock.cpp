#include "TextBlock.h"

UTextBlock::UTextBlock() {
    this->bIsVariable = false;
    this->MinDesiredWidth = 0.00f;
    this->bWrapWithInvalidationPanel = false;
    this->bAutoWrapText = false;
    this->bSimpleTextMode = false;
}

void UTextBlock::SetText(FText InText) {
}

void UTextBlock::SetStrikeBrush(FSlateBrush InStrikeBrush) {
}

void UTextBlock::SetShadowOffset(FVector2D InShadowOffset) {
}

void UTextBlock::SetShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity) {
}

void UTextBlock::SetOpacity(float InOpacity) {
}

void UTextBlock::SetMinDesiredWidth(float InMinDesiredWidth) {
}

void UTextBlock::SetFont(FSlateFontInfo InFontInfo) {
}

void UTextBlock::SetColorAndOpacity(FSlateColor InColorAndOpacity) {
}

void UTextBlock::SetAutoWrapText(bool InAutoTextWrap) {
}

FText UTextBlock::GetText() const {
    return FText::GetEmpty();
}

UMaterialInstanceDynamic* UTextBlock::GetDynamicOutlineMaterial() {
    return NULL;
}

UMaterialInstanceDynamic* UTextBlock::GetDynamicFontMaterial() {
    return NULL;
}


