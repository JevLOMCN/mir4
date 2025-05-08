#include "MovieSceneSequencePlayer.h"
#include "Net/UnrealNetwork.h"

UMovieSceneSequencePlayer::UMovieSceneSequencePlayer() {
    this->Status = EMovieScenePlayerStatus::Stopped;
    this->bReversePlayback = false;
    this->Sequence = NULL;
    this->DurationFrames = 0;
    this->CurrentNumLoops = 0;
}

void UMovieSceneSequencePlayer::StopAtCurrentTime() {
}

void UMovieSceneSequencePlayer::Stop() {
}

void UMovieSceneSequencePlayer::SetTimeRange(float NewStartTime, float Duration) {
}

void UMovieSceneSequencePlayer::SetPlayRate(float PlayRate) {
}

void UMovieSceneSequencePlayer::SetPlaybackRange(const float NewStartTime, const float NewEndTime) {
}

void UMovieSceneSequencePlayer::SetPlaybackPosition(float NewPlaybackPosition) {
}

void UMovieSceneSequencePlayer::SetFrameRate(FFrameRate FrameRate) {
}

void UMovieSceneSequencePlayer::SetFrameRange(int32 StartFrame, int32 Duration) {
}

void UMovieSceneSequencePlayer::SetDisableCameraCuts(bool bInDisableCameraCuts) {
}

void UMovieSceneSequencePlayer::ScrubToSeconds(float TimeInSeconds) {
}

bool UMovieSceneSequencePlayer::ScrubToMarkedFrame(const FString& InLabel) {
    return false;
}

void UMovieSceneSequencePlayer::ScrubToFrame(FFrameTime NewPosition) {
}

void UMovieSceneSequencePlayer::Scrub() {
}

void UMovieSceneSequencePlayer::RPC_OnStopEvent_Implementation(FFrameTime StoppedTime) {
}

void UMovieSceneSequencePlayer::RPC_ExplicitServerUpdateEvent_Implementation(EUpdatePositionMethod Method, FFrameTime RelevantTime) {
}

void UMovieSceneSequencePlayer::PlayToSeconds(float TimeInSeconds) {
}

bool UMovieSceneSequencePlayer::PlayToMarkedFrame(const FString& InLabel) {
    return false;
}

void UMovieSceneSequencePlayer::PlayToFrame(FFrameTime NewPosition) {
}

void UMovieSceneSequencePlayer::PlayReverse() {
}

void UMovieSceneSequencePlayer::PlayLooping(int32 NumLoops) {
}

void UMovieSceneSequencePlayer::Play() {
}

void UMovieSceneSequencePlayer::Pause() {
}

void UMovieSceneSequencePlayer::JumpToSeconds(float TimeInSeconds) {
}

void UMovieSceneSequencePlayer::JumpToPosition(float NewPlaybackPosition) {
}

bool UMovieSceneSequencePlayer::JumpToMarkedFrame(const FString& InLabel) {
    return false;
}

void UMovieSceneSequencePlayer::JumpToFrame(FFrameTime NewPosition) {
}

bool UMovieSceneSequencePlayer::IsReversed() const {
    return false;
}

bool UMovieSceneSequencePlayer::IsPlaying() const {
    return false;
}

bool UMovieSceneSequencePlayer::IsPaused() const {
    return false;
}

void UMovieSceneSequencePlayer::GoToEndAndStop() {
}

FQualifiedFrameTime UMovieSceneSequencePlayer::GetStartTime() const {
    return FQualifiedFrameTime{};
}

float UMovieSceneSequencePlayer::GetPlayRate() const {
    return 0.0f;
}

float UMovieSceneSequencePlayer::GetPlaybackStart() const {
    return 0.0f;
}

float UMovieSceneSequencePlayer::GetPlaybackPosition() const {
    return 0.0f;
}

float UMovieSceneSequencePlayer::GetPlaybackEnd() const {
    return 0.0f;
}

TArray<FMovieSceneObjectBindingID> UMovieSceneSequencePlayer::GetObjectBindings(UObject* InObject) {
    return TArray<FMovieSceneObjectBindingID>();
}

float UMovieSceneSequencePlayer::GetLength() const {
    return 0.0f;
}

FFrameRate UMovieSceneSequencePlayer::GetFrameRate() const {
    return FFrameRate{};
}

int32 UMovieSceneSequencePlayer::GetFrameDuration() const {
    return 0;
}

FQualifiedFrameTime UMovieSceneSequencePlayer::GetEndTime() const {
    return FQualifiedFrameTime{};
}

FQualifiedFrameTime UMovieSceneSequencePlayer::GetDuration() const {
    return FQualifiedFrameTime{};
}

bool UMovieSceneSequencePlayer::GetDisableCameraCuts() {
    return false;
}

FQualifiedFrameTime UMovieSceneSequencePlayer::GetCurrentTime() const {
    return FQualifiedFrameTime{};
}

TArray<UObject*> UMovieSceneSequencePlayer::GetBoundObjects(FMovieSceneObjectBindingID ObjectBinding) {
    return TArray<UObject*>();
}

void UMovieSceneSequencePlayer::ChangePlaybackDirection() {
}

void UMovieSceneSequencePlayer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMovieSceneSequencePlayer, bReversePlayback);
    DOREPLIFETIME(UMovieSceneSequencePlayer, StartTime);
    DOREPLIFETIME(UMovieSceneSequencePlayer, DurationFrames);
    DOREPLIFETIME(UMovieSceneSequencePlayer, PlaybackSettings);
    DOREPLIFETIME(UMovieSceneSequencePlayer, NetSyncProps);
}


