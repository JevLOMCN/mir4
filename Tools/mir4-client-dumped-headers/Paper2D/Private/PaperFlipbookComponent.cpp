#include "PaperFlipbookComponent.h"
#include "Net/UnrealNetwork.h"

UPaperFlipbookComponent::UPaperFlipbookComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->bUseAsOccluder = false;
    this->CastShadow = false;
    this->SourceFlipbook = NULL;
    this->Material = NULL;
    this->PlayRate = 1.00f;
    this->bLooping = true;
    this->bReversePlayback = false;
    this->bPlaying = true;
    this->AccumulatedTime = 0.00f;
    this->CachedFrameIndex = -1;
    this->CachedBodySetup = NULL;
}

void UPaperFlipbookComponent::Stop() {
}

void UPaperFlipbookComponent::SetSpriteColor(FLinearColor NewColor) {
}

void UPaperFlipbookComponent::SetPlayRate(float NewRate) {
}

void UPaperFlipbookComponent::SetPlaybackPositionInFrames(int32 NewFramePosition, bool bFireEvents) {
}

void UPaperFlipbookComponent::SetPlaybackPosition(float NewPosition, bool bFireEvents) {
}

void UPaperFlipbookComponent::SetNewTime(float NewTime) {
}

void UPaperFlipbookComponent::SetLooping(bool bNewLooping) {
}

bool UPaperFlipbookComponent::SetFlipbook(UPaperFlipbook* NewFlipbook) {
    return false;
}

void UPaperFlipbookComponent::ReverseFromEnd() {
}

void UPaperFlipbookComponent::Reverse() {
}

void UPaperFlipbookComponent::PlayFromStart() {
}

void UPaperFlipbookComponent::Play() {
}

void UPaperFlipbookComponent::OnRep_SourceFlipbook(UPaperFlipbook* OldFlipbook) {
}

bool UPaperFlipbookComponent::IsReversing() const {
    return false;
}

bool UPaperFlipbookComponent::IsPlaying() const {
    return false;
}

bool UPaperFlipbookComponent::IsLooping() const {
    return false;
}

float UPaperFlipbookComponent::GetPlayRate() const {
    return 0.0f;
}

int32 UPaperFlipbookComponent::GetPlaybackPositionInFrames() const {
    return 0;
}

float UPaperFlipbookComponent::GetPlaybackPosition() const {
    return 0.0f;
}

int32 UPaperFlipbookComponent::GetFlipbookLengthInFrames() const {
    return 0;
}

float UPaperFlipbookComponent::GetFlipbookLength() const {
    return 0.0f;
}

float UPaperFlipbookComponent::GetFlipbookFramerate() const {
    return 0.0f;
}

UPaperFlipbook* UPaperFlipbookComponent::GetFlipbook() {
    return NULL;
}

void UPaperFlipbookComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPaperFlipbookComponent, SourceFlipbook);
}


