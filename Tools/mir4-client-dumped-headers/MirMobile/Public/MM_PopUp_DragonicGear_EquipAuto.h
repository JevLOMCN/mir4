#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_PopUp_DragonicGear_EquipAuto.generated.h"

class UMM_Common_Btn;
class UMM_Common_Btn_Symbol;
class UMM_Slot_Inventory;

UCLASS(Blueprintable, EditInlineNew)
class UMM_PopUp_DragonicGear_EquipAuto : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_CB_Close;
    
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Slot_Inventory* m_EquipSlot[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_CB_Cancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_CB_AutoEquip;
    
public:
    UMM_PopUp_DragonicGear_EquipAuto();

    UFUNCTION()
    void OnClickEquipSlot(int64 iItemUID, int32 iItemTID, int32 iSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
    UFUNCTION(BlueprintCallable)
    void OnClickAutoEquip();
    
};

