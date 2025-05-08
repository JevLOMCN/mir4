#include "WidgetInteractionComponent.h"

UWidgetInteractionComponent::UWidgetInteractionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->VirtualUserIndex = 0;
    this->PointerIndex = 0.00f;
    this->TraceChannel = ECC_Visibility;
    this->InteractionDistance = 500.00f;
    this->InteractionSource = EWidgetInteractionSource::World;
    this->bEnableHitTesting = true;
    this->bShowDebug = false;
    this->HoveredWidgetComponent = NULL;
    this->bIsHoveredWidgetInteractable = false;
    this->bIsHoveredWidgetFocusable = false;
    this->bIsHoveredWidgetHitTestVisible = false;
}

void UWidgetInteractionComponent::SetFocus(UWidget* FocusWidget) {
}

void UWidgetInteractionComponent::SetCustomHitResult(const FHitResult& HitResult) {
}

bool UWidgetInteractionComponent::SendKeyChar(const FString& Characters, bool bRepeat) {
    return false;
}

void UWidgetInteractionComponent::ScrollWheel(float ScrollDelta) {
}

void UWidgetInteractionComponent::ReleasePointerKey(FKey Key) {
}

bool UWidgetInteractionComponent::ReleaseKey(FKey Key) {
    return false;
}

void UWidgetInteractionComponent::PressPointerKey(FKey Key) {
}

bool UWidgetInteractionComponent::PressKey(FKey Key, bool bRepeat) {
    return false;
}

bool UWidgetInteractionComponent::PressAndReleaseKey(FKey Key) {
    return false;
}

bool UWidgetInteractionComponent::IsOverInteractableWidget() const {
    return false;
}

bool UWidgetInteractionComponent::IsOverHitTestVisibleWidget() const {
    return false;
}

bool UWidgetInteractionComponent::IsOverFocusableWidget() const {
    return false;
}

FHitResult UWidgetInteractionComponent::GetLastHitResult() const {
    return FHitResult{};
}

UWidgetComponent* UWidgetInteractionComponent::GetHoveredWidgetComponent() const {
    return NULL;
}

FVector2D UWidgetInteractionComponent::Get2DHitLocation() const {
    return FVector2D{};
}


