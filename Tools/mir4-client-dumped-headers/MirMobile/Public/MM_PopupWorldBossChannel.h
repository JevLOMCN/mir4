#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_PopupWorldBossChannel.generated.h"

class UMM_Common_Btn_Symbol;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMM_PopupWorldBossChannel : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* btnClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_StartAni;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_EndAni;
    
    UMM_PopupWorldBossChannel();

    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

