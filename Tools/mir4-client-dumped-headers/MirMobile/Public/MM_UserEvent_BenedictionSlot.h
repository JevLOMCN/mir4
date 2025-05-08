#pragma once
#include "CoreMinimal.h"
#include "MM_Slot_Base.h"
#include "MM_UserEvent_BenedictionSlot.generated.h"

class UEffectWidgetBase;
class UMirImage;

UCLASS(Blueprintable, EditInlineNew)
class MIRMOBILE_API UMM_UserEvent_BenedictionSlot : public UMM_Slot_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_GradeBgEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_ImgDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_ImgCurrSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_Complete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEffectWidgetBase* m_Effect;
    
public:
    UMM_UserEvent_BenedictionSlot();

};

