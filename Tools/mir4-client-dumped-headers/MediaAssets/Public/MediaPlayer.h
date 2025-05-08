#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=MediaUtils -ObjectName=MediaPlayerOptions -FallbackName=MediaPlayerOptions
#include "EMediaPlayerTrack.h"
#include "OnMediaPlayerMediaEventDelegate.h"
#include "OnMediaPlayerMediaOpenFailedDelegate.h"
#include "OnMediaPlayerMediaOpenedDelegate.h"
#include "MediaPlayer.generated.h"

class UMediaPlaylist;
class UMediaSource;

UCLASS(Blueprintable)
class MEDIAASSETS_API UMediaPlayer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMediaPlayerMediaEvent OnEndReached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMediaPlayerMediaEvent OnMediaClosed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMediaPlayerMediaOpened OnMediaOpened;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMediaPlayerMediaOpenFailed OnMediaOpenFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMediaPlayerMediaEvent OnPlaybackResumed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMediaPlayerMediaEvent OnPlaybackSuspended;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMediaPlayerMediaEvent OnSeekCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMediaPlayerMediaEvent OnTracksChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimespan CacheAhead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimespan CacheBehind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimespan CacheBehindGame;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NativeAudioOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PlayOnOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Shuffle: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Loop: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMediaPlaylist* Playlist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlaylistIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimespan TimeDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HorizontalFieldOfView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalFieldOfView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator ViewRotation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid PlayerGuid;
    
public:
    UMediaPlayer();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SupportsSeeking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SupportsScrubbing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SupportsRate(float Rate, bool Unthinned) const;
    
    UFUNCTION(BlueprintCallable)
    bool SetViewRotation(const FRotator& Rotation, bool Absolute);
    
    UFUNCTION(BlueprintCallable)
    bool SetViewField(float Horizontal, float Vertical, bool Absolute);
    
    UFUNCTION(BlueprintCallable)
    bool SetVideoTrackFrameRate(int32 TrackIndex, int32 FormatIndex, float FrameRate);
    
    UFUNCTION(BlueprintCallable)
    bool SetTrackFormat(EMediaPlayerTrack TrackType, int32 TrackIndex, int32 FormatIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetTimeDelay(FTimespan NewTimeDelay);
    
    UFUNCTION(BlueprintCallable)
    bool SetRate(float Rate);
    
    UFUNCTION(BlueprintCallable)
    bool SetNativeVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetMediaOptions(const UMediaSource* Options);
    
    UFUNCTION(BlueprintCallable)
    bool SetLooping(bool Looping);
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredPlayerName(FName PlayerName);
    
    UFUNCTION(BlueprintCallable)
    void SetBlockOnTime(const FTimespan& Time);
    
    UFUNCTION(BlueprintCallable)
    bool SelectTrack(EMediaPlayerTrack TrackType, int32 TrackIndex);
    
    UFUNCTION(BlueprintCallable)
    bool Seek(const FTimespan& Time);
    
    UFUNCTION(BlueprintCallable)
    bool Rewind();
    
    UFUNCTION(BlueprintCallable)
    bool Reopen();
    
    UFUNCTION(BlueprintCallable)
    bool Previous();
    
    UFUNCTION(BlueprintCallable)
    bool Play();
    
    UFUNCTION(BlueprintCallable)
    bool Pause();
    
    UFUNCTION(BlueprintCallable)
    bool OpenUrl(const FString& URL);
    
    UFUNCTION(BlueprintCallable)
    bool OpenSourceWithOptions(UMediaSource* MediaSource, const FMediaPlayerOptions& Options);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void OpenSourceLatent(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, UMediaSource* MediaSource, const FMediaPlayerOptions& Options, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable)
    bool OpenSource(UMediaSource* MediaSource);
    
    UFUNCTION(BlueprintCallable)
    bool OpenPlaylistIndex(UMediaPlaylist* InPlaylist, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool OpenPlaylist(UMediaPlaylist* InPlaylist);
    
    UFUNCTION(BlueprintCallable)
    bool OpenFile(const FString& FilePath);
    
    UFUNCTION(BlueprintCallable)
    bool Next();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPreparing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPaused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLooping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConnecting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClosed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBuffering() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasError() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetViewRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetVideoTrackType(int32 TrackIndex, int32 FormatIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFloatRange GetVideoTrackFrameRates(int32 TrackIndex, int32 FormatIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVideoTrackFrameRate(int32 TrackIndex, int32 FormatIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIntPoint GetVideoTrackDimensions(int32 TrackIndex, int32 FormatIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVideoTrackAspectRatio(int32 TrackIndex, int32 FormatIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVerticalFieldOfView() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetUrl() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTrackLanguage(EMediaPlayerTrack TrackType, int32 TrackIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTrackFormat(EMediaPlayerTrack TrackType, int32 TrackIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTrackDisplayName(EMediaPlayerTrack TrackType, int32 TrackIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetTimeDelay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSupportedRates(TArray<FFloatRange>& OutRates, bool Unthinned) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedTrack(EMediaPlayerTrack TrackType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlaylistIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMediaPlaylist* GetPlaylist() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetPlayerName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumTracks(EMediaPlayerTrack TrackType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumTrackFormats(EMediaPlayerTrack TrackType, int32 TrackIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetMediaName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetLastVideoSampleProcessedTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetLastAudioSampleProcessedTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHorizontalFieldOfView() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetDesiredPlayerName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAudioTrackType(int32 TrackIndex, int32 FormatIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAudioTrackSampleRate(int32 TrackIndex, int32 FormatIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAudioTrackChannels(int32 TrackIndex, int32 FormatIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
    UFUNCTION(BlueprintCallable)
    bool CanPlayUrl(const FString& URL);
    
    UFUNCTION(BlueprintCallable)
    bool CanPlaySource(UMediaSource* MediaSource);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPause() const;
    
};

