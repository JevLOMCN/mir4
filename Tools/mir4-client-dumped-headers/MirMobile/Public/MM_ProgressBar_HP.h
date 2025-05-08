#pragma once
#include "CoreMinimal.h"
#include "MM_ProgressBar_Tail.h"
#include "MM_ProgressBar_HP.generated.h"

class UCanvasPanel;
class UImage;
class UProgressBar;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMM_ProgressBar_HP : public UMM_ProgressBar_Tail {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UProgressBar* ProgressBar_Shield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* EndEdgeEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* DecoImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AnimHitEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AnimIdleEffect;
    
public:
    UMM_ProgressBar_HP();

};

