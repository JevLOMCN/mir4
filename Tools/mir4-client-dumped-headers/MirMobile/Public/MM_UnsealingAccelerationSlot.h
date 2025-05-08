#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_UnsealingAccelerationSlot.generated.h"

class UMM_Common_Btn;
class UMM_Common_Btn_Cost;
class UMM_Slot_Inventory;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_UnsealingAccelerationSlot : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Slot_Inventory* m_Slot_Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_ItemExplain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_HaveCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Cost* m_CB_UseCash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_CB_UseItemAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_CB_UseItem;
    
public:
    UMM_UnsealingAccelerationSlot();

    UFUNCTION(BlueprintCallable)
    void OnClickUseItemAll();
    
    UFUNCTION(BlueprintCallable)
    void OnClickUseItem();
    
    UFUNCTION(BlueprintCallable)
    void OnClickUseCash();
    
};

