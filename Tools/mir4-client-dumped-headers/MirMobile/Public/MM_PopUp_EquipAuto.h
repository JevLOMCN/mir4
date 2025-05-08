#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_PopUp_EquipAuto.generated.h"

class UMM_Common_Btn;
class UMM_Common_Btn_Symbol;
class UMM_Slot_Inventory;

UCLASS(Blueprintable, EditInlineNew)
class UMM_PopUp_EquipAuto : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<int32, UMM_Slot_Inventory*> m_EquipSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_CancleBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_OkBtn;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* btn_close;
    
public:
    UMM_PopUp_EquipAuto();

    UFUNCTION()
    void OnClickInvenSlot(int64 ItemUID);
    
    UFUNCTION(BlueprintCallable)
    void OnClickCancle();
    
    UFUNCTION(BlueprintCallable)
    void OnClickAutoEquip();
    
};

