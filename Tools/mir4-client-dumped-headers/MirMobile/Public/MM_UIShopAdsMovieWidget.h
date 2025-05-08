#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_UIShopAdsMovieWidget.generated.h"

class AMediaSoundActor;
class UMediaPlayer;
class UMediaSource;
class UMediaTexture;
class UMirButton;

UCLASS(Blueprintable, EditInlineNew)
class UMM_UIShopAdsMovieWidget : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaPlayer* m_MediaPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaTexture* m_MediaTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaSource* m_MediaSource;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_Skip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMediaSoundActor* m_MediaSoundActor;
    
public:
    UMM_UIShopAdsMovieWidget();

    UFUNCTION(BlueprintCallable)
    void OnEndReached();
    
    UFUNCTION(BlueprintCallable)
    void OnClickSkip();
    
};

