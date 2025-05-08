#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_PaintRegist.generated.h"

class UMM_Common_Btn;
class UMM_Common_Btn_Symbol;
class UMM_UserEvent_Paint_Slot;
class UMM_UserEvent_Paint_Slot_S;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_PaintRegist : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_C_Btn_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_C_Btn_OK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_C_Btn_Cancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_UserEvent_Paint_Slot* m_TakeSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_UserEvent_Paint_Slot* m_GiveSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_UserEvent_Paint_Slot_S*> m_arSlots;
    
public:
    UMM_Popup_PaintRegist();

    UFUNCTION(BlueprintCallable)
    void OnClickSlotTake(UMM_UserEvent_Paint_Slot* pSlot);
    
    UFUNCTION(BlueprintCallable)
    void OnClickSlotGive(UMM_UserEvent_Paint_Slot* pSlot);
    
    UFUNCTION(BlueprintCallable)
    void OnClickSlot(UMM_UserEvent_Paint_Slot* pSlot);
    
    UFUNCTION(BlueprintCallable)
    void OnClickOk();
    
    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

