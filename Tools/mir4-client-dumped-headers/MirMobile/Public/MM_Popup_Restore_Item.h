#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_Restore_Item.generated.h"

class UMM_Common_Btn;
class UMM_Common_Btn_Symbol;
class UMirScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_Restore_Item : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_pBtnClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_pBtnMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* m_pScrollList;
    
public:
    UMM_Popup_Restore_Item();

    UFUNCTION(BlueprintCallable)
    void OnSelectSlot(int32 iSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnClickMove();
    
    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

