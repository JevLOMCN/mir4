#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_GuildCommandMark_Slot.generated.h"

class UEffectWidgetBase;
class UMirButton;
class UMirCanvasPanel;
class UMirImage;

UCLASS(Blueprintable, EditInlineNew)
class UMM_GuildCommandMark_Slot : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCanvasPanel* m_CanEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_ImgSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_ImgCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_ImgMarkIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_BtnClick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEffectWidgetBase* m_EffectCoolTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEffectWidgetBase* m_EffectClick;
    
public:
    UMM_GuildCommandMark_Slot();

    UFUNCTION(BlueprintCallable)
    void OnFinishAni_Cooltime();
    
    UFUNCTION(BlueprintCallable)
    void OnClickClick();
    
};

