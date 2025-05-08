#include "SizeBox.h"
#include "ESlateVisibility.h"

USizeBox::USizeBox() {
    this->bIsVariable = false;
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
    this->WidthOverride = 0.00f;
    this->HeightOverride = 0.00f;
    this->MinDesiredWidth = 0.00f;
    this->MinDesiredHeight = 0.00f;
    this->MaxDesiredWidth = 0.00f;
    this->MaxDesiredHeight = 0.00f;
    this->MinAspectRatio = 1.00f;
    this->MaxAspectRatio = 1.00f;
    this->bOverride_WidthOverride = false;
    this->bOverride_HeightOverride = false;
    this->bOverride_MinDesiredWidth = false;
    this->bOverride_MinDesiredHeight = false;
    this->bOverride_MaxDesiredWidth = false;
    this->bOverride_MaxDesiredHeight = false;
    this->bOverride_MinAspectRatio = false;
    this->bOverride_MaxAspectRatio = false;
}

void USizeBox::SetWidthOverride(float InWidthOverride) {
}

void USizeBox::SetMinDesiredWidth(float InMinDesiredWidth) {
}

void USizeBox::SetMinDesiredHeight(float InMinDesiredHeight) {
}

void USizeBox::SetMinAspectRatio(float InMinAspectRatio) {
}

void USizeBox::SetMaxDesiredWidth(float InMaxDesiredWidth) {
}

void USizeBox::SetMaxDesiredHeight(float InMaxDesiredHeight) {
}

void USizeBox::SetMaxAspectRatio(float InMaxAspectRatio) {
}

void USizeBox::SetHeightOverride(float InHeightOverride) {
}

void USizeBox::ClearWidthOverride() {
}

void USizeBox::ClearMinDesiredWidth() {
}

void USizeBox::ClearMinDesiredHeight() {
}

void USizeBox::ClearMinAspectRatio() {
}

void USizeBox::ClearMaxDesiredWidth() {
}

void USizeBox::ClearMaxDesiredHeight() {
}

void USizeBox::ClearMaxAspectRatio() {
}

void USizeBox::ClearHeightOverride() {
}


