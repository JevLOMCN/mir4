#include "ProgressBar.h"

UProgressBar::UProgressBar() {
    this->Style = NULL;
    this->BackgroundImage = NULL;
    this->FillImage = NULL;
    this->MarqueeImage = NULL;
    this->Percent = 0.00f;
    this->BarFillType = EProgressBarFillType::LeftToRight;
    this->bIsMarquee = false;
}

void UProgressBar::SetPercent(float InPercent) {
}

void UProgressBar::SetIsMarquee(bool InbIsMarquee) {
}

void UProgressBar::SetFillColorAndOpacity(FLinearColor InColor) {
}


