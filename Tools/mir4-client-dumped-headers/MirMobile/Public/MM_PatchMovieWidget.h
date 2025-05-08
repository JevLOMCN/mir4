#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_PatchMovieWidget.generated.h"

class AMediaSoundActor;
class UMM_VolumeController;
class UMediaPlayer;
class UMediaSource;
class UMediaTexture;

UCLASS(Blueprintable, EditInlineNew)
class UMM_PatchMovieWidget : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaPlayer* m_MediaPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaTexture* m_MediaTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaSource* m_Movie_Patch;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMediaSoundActor* m_MediaSoundActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_VolumeController* m_VolumeController;
    
public:
    UMM_PatchMovieWidget();

};

