#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "LogoMediaWidget.generated.h"

class AMediaSoundActor;
class UImage;
class UMediaPlayer;
class UMediaSource;
class UMediaTexture;
class USoundBase;

UCLASS(Blueprintable, EditInlineNew)
class ULogoMediaWidget : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaPlayer* m_MediaPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaTexture* m_MediaTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaSource* m_Movie_StartLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaSource* m_Movie_AccountConnectIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaSource* m_Movie_AccountConnectLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaSource* m_Movie_AccessLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaSource* m_Movie_EndIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* m_LogoBgm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMediaStartDelay;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMediaSoundActor* m_MediaSoundActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* m_Img_Moive;
    
public:
    ULogoMediaWidget();

private:
    UFUNCTION(BlueprintCallable)
    void ShowMovieImage();
    
    UFUNCTION(BlueprintCallable)
    void OnEndReached();
    
};

