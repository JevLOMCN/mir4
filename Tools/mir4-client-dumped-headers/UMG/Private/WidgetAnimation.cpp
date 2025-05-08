#include "WidgetAnimation.h"

UWidgetAnimation::UWidgetAnimation() {
    this->MovieScene = NULL;
    this->bLegacyFinishOnStop = true;
}

void UWidgetAnimation::UnbindFromAnimationStarted(UUserWidget* Widget, FWidgetAnimationDynamicEvent Delegate) {
}

void UWidgetAnimation::UnbindFromAnimationFinished(UUserWidget* Widget, FWidgetAnimationDynamicEvent Delegate) {
}

void UWidgetAnimation::UnbindAllFromAnimationStarted(UUserWidget* Widget) {
}

void UWidgetAnimation::UnbindAllFromAnimationFinished(UUserWidget* Widget) {
}

float UWidgetAnimation::GetStartTime() const {
    return 0.0f;
}

float UWidgetAnimation::GetEndTime() const {
    return 0.0f;
}

void UWidgetAnimation::BindToAnimationStarted(UUserWidget* Widget, FWidgetAnimationDynamicEvent Delegate) {
}

void UWidgetAnimation::BindToAnimationFinished(UUserWidget* Widget, FWidgetAnimationDynamicEvent Delegate) {
}


