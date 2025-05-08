#include "RichTextBlock.h"
#include "ESlateVisibility.h"
#include "Templates/SubclassOf.h"

URichTextBlock::URichTextBlock() {
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
    this->TextStyleSet = NULL;
    this->bOverrideDefaultStyle = false;
    this->MinDesiredWidth = 0.00f;
}

void URichTextBlock::SetTextStyleSet(UDataTable* NewTextStyleSet) {
}

void URichTextBlock::SetText(const FText& InText) {
}

void URichTextBlock::SetMinDesiredWidth(float InMinDesiredWidth) {
}

void URichTextBlock::SetDefaultTextStyle(const FTextBlockStyle& InDefaultTextStyle) {
}

void URichTextBlock::SetDefaultStrikeBrush(FSlateBrush& InStrikeBrush) {
}

void URichTextBlock::SetDefaultShadowOffset(FVector2D InShadowOffset) {
}

void URichTextBlock::SetDefaultShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity) {
}

void URichTextBlock::SetDefaultFont(FSlateFontInfo InFontInfo) {
}

void URichTextBlock::SetDefaultColorAndOpacity(FSlateColor InColorAndOpacity) {
}

void URichTextBlock::SetAutoWrapText(bool InAutoTextWrap) {
}

FText URichTextBlock::GetText() const {
    return FText::GetEmpty();
}

URichTextBlockDecorator* URichTextBlock::GetDecoratorByClass(TSubclassOf<URichTextBlockDecorator> DecoratorClass) {
    return NULL;
}

void URichTextBlock::ClearAllDefaultStyleOverrides() {
}


