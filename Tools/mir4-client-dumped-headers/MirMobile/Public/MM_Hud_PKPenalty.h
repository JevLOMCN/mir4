#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Hud_PKPenalty.generated.h"

class UMM_Popup_DeathPenalty;
class UMirButton;
class UMirImage;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Hud_PKPenalty : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* Img_PenaltyIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* Btn_Penalty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Popup_DeathPenalty* PopupDeathPenalty;
    
public:
    UMM_Hud_PKPenalty();

    UFUNCTION(BlueprintCallable)
    void OnClickOpenPKPenaltyPopup();
    
};

