#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_QuickSlot_Option.generated.h"

class UMM_Common_Btn_Symbol;
class UMM_GameOption_Select;
class UMM_GameOption_Slider;
class UMM_GameOption_Switch;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_QuickSlot_Option : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_Btn_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GameOption_Slider* m_HP_AutoPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GameOption_Slider* m_MP_AutoPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GameOption_Select* m_Option_AutoEquip;
    
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GameOption_Switch* m_Option_QuickSlotAuto[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GameOption_Select* m_Option_InvenSort;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GameOption_Select* m_Option_InvenOrder;
    
public:
    UMM_Popup_QuickSlot_Option();

    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

