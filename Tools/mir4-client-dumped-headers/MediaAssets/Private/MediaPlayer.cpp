#include "MediaPlayer.h"

UMediaPlayer::UMediaPlayer() {
    this->NativeAudioOut = false;
    this->PlayOnOpen = true;
    this->Shuffle = false;
    this->Loop = false;
    this->Playlist = NULL;
    this->PlaylistIndex = -1;
    this->HorizontalFieldOfView = 90.00f;
    this->VerticalFieldOfView = 60.00f;
}

bool UMediaPlayer::SupportsSeeking() const {
    return false;
}

bool UMediaPlayer::SupportsScrubbing() const {
    return false;
}

bool UMediaPlayer::SupportsRate(float Rate, bool Unthinned) const {
    return false;
}

bool UMediaPlayer::SetViewRotation(const FRotator& Rotation, bool Absolute) {
    return false;
}

bool UMediaPlayer::SetViewField(float Horizontal, float Vertical, bool Absolute) {
    return false;
}

bool UMediaPlayer::SetVideoTrackFrameRate(int32 TrackIndex, int32 FormatIndex, float FrameRate) {
    return false;
}

bool UMediaPlayer::SetTrackFormat(EMediaPlayerTrack TrackType, int32 TrackIndex, int32 FormatIndex) {
    return false;
}

void UMediaPlayer::SetTimeDelay(FTimespan NewTimeDelay) {
}

bool UMediaPlayer::SetRate(float Rate) {
    return false;
}

bool UMediaPlayer::SetNativeVolume(float Volume) {
    return false;
}

void UMediaPlayer::SetMediaOptions(const UMediaSource* Options) {
}

bool UMediaPlayer::SetLooping(bool Looping) {
    return false;
}

void UMediaPlayer::SetDesiredPlayerName(FName PlayerName) {
}

void UMediaPlayer::SetBlockOnTime(const FTimespan& Time) {
}

bool UMediaPlayer::SelectTrack(EMediaPlayerTrack TrackType, int32 TrackIndex) {
    return false;
}

bool UMediaPlayer::Seek(const FTimespan& Time) {
    return false;
}

bool UMediaPlayer::Rewind() {
    return false;
}

bool UMediaPlayer::Reopen() {
    return false;
}

bool UMediaPlayer::Previous() {
    return false;
}

bool UMediaPlayer::Play() {
    return false;
}

bool UMediaPlayer::Pause() {
    return false;
}

bool UMediaPlayer::OpenUrl(const FString& URL) {
    return false;
}

bool UMediaPlayer::OpenSourceWithOptions(UMediaSource* MediaSource, const FMediaPlayerOptions& Options) {
    return false;
}

void UMediaPlayer::OpenSourceLatent(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, UMediaSource* MediaSource, const FMediaPlayerOptions& Options, bool& bSuccess) {
}

bool UMediaPlayer::OpenSource(UMediaSource* MediaSource) {
    return false;
}

bool UMediaPlayer::OpenPlaylistIndex(UMediaPlaylist* InPlaylist, int32 Index) {
    return false;
}

bool UMediaPlayer::OpenPlaylist(UMediaPlaylist* InPlaylist) {
    return false;
}

bool UMediaPlayer::OpenFile(const FString& FilePath) {
    return false;
}

bool UMediaPlayer::Next() {
    return false;
}

bool UMediaPlayer::IsReady() const {
    return false;
}

bool UMediaPlayer::IsPreparing() const {
    return false;
}

bool UMediaPlayer::IsPlaying() const {
    return false;
}

bool UMediaPlayer::IsPaused() const {
    return false;
}

bool UMediaPlayer::IsLooping() const {
    return false;
}

bool UMediaPlayer::IsConnecting() const {
    return false;
}

bool UMediaPlayer::IsClosed() const {
    return false;
}

bool UMediaPlayer::IsBuffering() const {
    return false;
}

bool UMediaPlayer::HasError() const {
    return false;
}

FRotator UMediaPlayer::GetViewRotation() const {
    return FRotator{};
}

FString UMediaPlayer::GetVideoTrackType(int32 TrackIndex, int32 FormatIndex) const {
    return TEXT("");
}

FFloatRange UMediaPlayer::GetVideoTrackFrameRates(int32 TrackIndex, int32 FormatIndex) const {
    return FFloatRange{};
}

float UMediaPlayer::GetVideoTrackFrameRate(int32 TrackIndex, int32 FormatIndex) const {
    return 0.0f;
}

FIntPoint UMediaPlayer::GetVideoTrackDimensions(int32 TrackIndex, int32 FormatIndex) const {
    return FIntPoint{};
}

float UMediaPlayer::GetVideoTrackAspectRatio(int32 TrackIndex, int32 FormatIndex) const {
    return 0.0f;
}

float UMediaPlayer::GetVerticalFieldOfView() const {
    return 0.0f;
}

FString UMediaPlayer::GetUrl() const {
    return TEXT("");
}

FString UMediaPlayer::GetTrackLanguage(EMediaPlayerTrack TrackType, int32 TrackIndex) const {
    return TEXT("");
}

int32 UMediaPlayer::GetTrackFormat(EMediaPlayerTrack TrackType, int32 TrackIndex) const {
    return 0;
}

FText UMediaPlayer::GetTrackDisplayName(EMediaPlayerTrack TrackType, int32 TrackIndex) const {
    return FText::GetEmpty();
}

FTimespan UMediaPlayer::GetTimeDelay() const {
    return FTimespan{};
}

FTimespan UMediaPlayer::GetTime() const {
    return FTimespan{};
}

void UMediaPlayer::GetSupportedRates(TArray<FFloatRange>& OutRates, bool Unthinned) const {
}

int32 UMediaPlayer::GetSelectedTrack(EMediaPlayerTrack TrackType) const {
    return 0;
}

float UMediaPlayer::GetRate() const {
    return 0.0f;
}

int32 UMediaPlayer::GetPlaylistIndex() const {
    return 0;
}

UMediaPlaylist* UMediaPlayer::GetPlaylist() const {
    return NULL;
}

FName UMediaPlayer::GetPlayerName() const {
    return NAME_None;
}

int32 UMediaPlayer::GetNumTracks(EMediaPlayerTrack TrackType) const {
    return 0;
}

int32 UMediaPlayer::GetNumTrackFormats(EMediaPlayerTrack TrackType, int32 TrackIndex) const {
    return 0;
}

FText UMediaPlayer::GetMediaName() const {
    return FText::GetEmpty();
}

FTimespan UMediaPlayer::GetLastVideoSampleProcessedTime() const {
    return FTimespan{};
}

FTimespan UMediaPlayer::GetLastAudioSampleProcessedTime() const {
    return FTimespan{};
}

float UMediaPlayer::GetHorizontalFieldOfView() const {
    return 0.0f;
}

FTimespan UMediaPlayer::GetDuration() const {
    return FTimespan{};
}

FName UMediaPlayer::GetDesiredPlayerName() const {
    return NAME_None;
}

FString UMediaPlayer::GetAudioTrackType(int32 TrackIndex, int32 FormatIndex) const {
    return TEXT("");
}

int32 UMediaPlayer::GetAudioTrackSampleRate(int32 TrackIndex, int32 FormatIndex) const {
    return 0;
}

int32 UMediaPlayer::GetAudioTrackChannels(int32 TrackIndex, int32 FormatIndex) const {
    return 0;
}

void UMediaPlayer::Close() {
}

bool UMediaPlayer::CanPlayUrl(const FString& URL) {
    return false;
}

bool UMediaPlayer::CanPlaySource(UMediaSource* MediaSource) {
    return false;
}

bool UMediaPlayer::CanPause() const {
    return false;
}


