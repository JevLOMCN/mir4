#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_PetSpeechBalloon.generated.h"

class UMirTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMM_PetSpeechBalloon : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fShowTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Speech;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_AniStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_AniEnd;
    
public:
    UMM_PetSpeechBalloon();

private:
    UFUNCTION(BlueprintCallable)
    void PlayCloseAni();
    
    UFUNCTION(BlueprintCallable)
    void CloseMySelf();
    
};

