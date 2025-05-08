#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Hud_Popup_ChattingOpacity.generated.h"

class UMM_Common_Btn_Symbol;
class UMM_GameOption_Select;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Hud_Popup_ChattingOpacity : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* btn_close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GameOption_Select* Option_ChattingRenderOpacity;
    
public:
    UMM_Hud_Popup_ChattingOpacity();

    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

