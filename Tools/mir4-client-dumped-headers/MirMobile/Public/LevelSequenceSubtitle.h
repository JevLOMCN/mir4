#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EDialoguePostion.h"
#include "LevelSequenceSubtitle.generated.h"

class UFadeWidget;
class USoundCue;

UCLASS(Blueprintable)
class ALevelSequenceSubtitle : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float m_FadeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString m_StringID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    USoundCue* m_pSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString m_WidgetName;
    
    ALevelSequenceSubtitle(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSubtitle(const FString& Subtitle, const EDialoguePostion SubtitleType);
    
    UFUNCTION(BlueprintCallable)
    UFadeWidget* CreateFadeWidget();
    
};

