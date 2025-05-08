#include "UserWidget.h"
#include "ESlateVisibility.h"

UUserWidget::UUserWidget() {
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
    this->WidgetTree = NULL;
    this->Priority = 0;
    this->bSupportsKeyboardFocus = true;
    this->bIsFocusable = false;
    this->bStopAction = false;
    this->bHasScriptImplementedTick = true;
    this->bHasScriptImplementedPaint = true;
    this->bCookedWidgetTree = false;
    this->TickFrequency = EWidgetTickFrequency::Auto;
    this->InputComponent = NULL;
}

void UUserWidget::UnregisterInputComponent() {
}

void UUserWidget::UnbindFromAnimationStarted(UWidgetAnimation* Animation, FWidgetAnimationDynamicEvent Delegate) {
}

void UUserWidget::UnbindFromAnimationFinished(UWidgetAnimation* Animation, FWidgetAnimationDynamicEvent Delegate) {
}

void UUserWidget::UnbindAllFromAnimationStarted(UWidgetAnimation* Animation) {
}

void UUserWidget::UnbindAllFromAnimationFinished(UWidgetAnimation* Animation) {
}


void UUserWidget::StopListeningForInputAction(FName ActionName, TEnumAsByte<EInputEvent> eventType) {
}

void UUserWidget::StopListeningForAllInputActions() {
}

void UUserWidget::StopAnimationsAndLatentActions() {
}

void UUserWidget::StopAnimation(const UWidgetAnimation* InAnimation) {
}

void UUserWidget::StopAllAnimations() {
}

void UUserWidget::SetPositionInViewport(FVector2D Position, bool bRemoveDPIScale) {
}

void UUserWidget::SetPlaybackSpeed(const UWidgetAnimation* InAnimation, float PlaybackSpeed) {
}

void UUserWidget::SetPadding(FMargin InPadding) {
}

void UUserWidget::SetOwningPlayer(APlayerController* LocalPlayerController) {
}

void UUserWidget::SetNumLoopsToPlay(const UWidgetAnimation* InAnimation, int32 NumLoopsToPlay) {
}

void UUserWidget::SetInputActionPriority(int32 NewPriority) {
}

void UUserWidget::SetInputActionBlocking(bool bShouldBlock) {
}

void UUserWidget::SetForegroundColor(FSlateColor InForegroundColor) {
}

void UUserWidget::SetDesiredSizeInViewport(FVector2D Size) {
}

void UUserWidget::SetColorAndOpacity(FLinearColor InColorAndOpacity) {
}

void UUserWidget::SetAnchorsInViewport(FAnchors Anchors) {
}

void UUserWidget::SetAlignmentInViewport(FVector2D Alignment) {
}

void UUserWidget::ReverseAnimation(const UWidgetAnimation* InAnimation) {
}

void UUserWidget::RemoveFromViewport() {
}

void UUserWidget::RegisterInputComponent() {
}


void UUserWidget::PlaySound(USoundBase* SoundToPlay) {
}

UUMGSequencePlayer* UUserWidget::PlayAnimationTimeRange(UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32 NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaybackSpeed, bool bRestoreState) {
    return NULL;
}

UUMGSequencePlayer* UUserWidget::PlayAnimationReverse(UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState) {
    return NULL;
}

UUMGSequencePlayer* UUserWidget::PlayAnimationForward(UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState) {
    return NULL;
}

UUMGSequencePlayer* UUserWidget::PlayAnimation(UWidgetAnimation* InAnimation, float StartAtTime, int32 NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaybackSpeed, bool bRestoreState) {
    return NULL;
}

float UUserWidget::PauseAnimation(const UWidgetAnimation* InAnimation) {
    return 0.0f;
}































void UUserWidget::OnAnimationStarted_Implementation(const UWidgetAnimation* Animation) {
}

void UUserWidget::OnAnimationFinished_Implementation(const UWidgetAnimation* Animation) {
}



void UUserWidget::ListenForInputAction(FName ActionName, TEnumAsByte<EInputEvent> eventType, bool bConsume, FOnInputAction Callback) {
}

bool UUserWidget::IsPlayingAnimation() const {
    return false;
}

bool UUserWidget::IsListeningForInputAction(FName ActionName) const {
    return false;
}

bool UUserWidget::IsInViewport() const {
    return false;
}


bool UUserWidget::IsAnyAnimationPlaying() const {
    return false;
}

bool UUserWidget::IsAnimationPlayingForward(const UWidgetAnimation* InAnimation) {
    return false;
}

bool UUserWidget::IsAnimationPlaying(const UWidgetAnimation* InAnimation) const {
    return false;
}

APawn* UUserWidget::GetOwningPlayerPawn() const {
    return NULL;
}

bool UUserWidget::GetIsVisible() const {
    return false;
}

float UUserWidget::GetAnimationCurrentTime(const UWidgetAnimation* InAnimation) const {
    return 0.0f;
}

FAnchors UUserWidget::GetAnchorsInViewport() const {
    return FAnchors{};
}

FVector2D UUserWidget::GetAlignmentInViewport() const {
    return FVector2D{};
}



void UUserWidget::CancelLatentActions() {
}

void UUserWidget::BindToAnimationStarted(UWidgetAnimation* Animation, FWidgetAnimationDynamicEvent Delegate) {
}

void UUserWidget::BindToAnimationFinished(UWidgetAnimation* Animation, FWidgetAnimationDynamicEvent Delegate) {
}

void UUserWidget::BindToAnimationEvent(UWidgetAnimation* Animation, FWidgetAnimationDynamicEvent Delegate, EWidgetAnimationEvent AnimationEvent, FName UserTag) {
}

void UUserWidget::AddToViewport(int32 ZOrder) {
}

bool UUserWidget::AddToPlayerScreen(int32 ZOrder) {
    return false;
}


