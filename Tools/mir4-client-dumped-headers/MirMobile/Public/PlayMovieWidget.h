#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "PlayMovieWidget.generated.h"

class UButton;
class UCanvasPanel;
class UMediaPlayer;
class UMediaSource;
class UMediaTexture;
class UMirTextBlock;
class UMovieSubtitleData;

UCLASS(Blueprintable, EditInlineNew)
class UPlayMovieWidget : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaPlayer* m_MediaPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaTexture* m_MediaTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaSource* m_MediaSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSkipDelayTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_pSkipBtnPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UButton* m_pSkipButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_pMovieSubtitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMovieSubtitleData* m_pSubtitleData;
    
public:
    UPlayMovieWidget();

    UFUNCTION(BlueprintCallable)
    void OnEndReached();
    
    UFUNCTION(BlueprintCallable)
    void OnCloseEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnClickSkip();
    
};

