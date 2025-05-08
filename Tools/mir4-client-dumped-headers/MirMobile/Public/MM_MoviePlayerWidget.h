#pragma once
#include "CoreMinimal.h"
#include "OnMovieFinishBlueprintEventDelegate.h"
#include "WidgetBase.h"
#include "MM_MoviePlayerWidget.generated.h"

class AMediaSoundActor;
class UMaterialInterface;
class UMediaPlayer;
class UMediaSource;
class UMediaTexture;
class UMirImage;

UCLASS(Blueprintable, EditInlineNew)
class UMM_MoviePlayerWidget : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaPlayer* m_MediaPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaTexture* m_MediaTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* m_MediaTextureMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaSource* m_MediaSource;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMediaSoundActor* m_MediaSoundActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_Movie;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMovieFinishBlueprintEvent m_OnMovieFinishBlueprintEvent;
    
    UMM_MoviePlayerWidget();

    UFUNCTION(BlueprintCallable)
    void StopMedia();
    
    UFUNCTION(BlueprintCallable)
    void PlayMedia(const FString& strMediaPath);
    
    UFUNCTION(BlueprintCallable)
    void OnEndReached();
    
};

