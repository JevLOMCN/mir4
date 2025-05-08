#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Item_Make_Special_Popup.generated.h"

class UMM_Common_Btn;
class UMM_Common_Btn_Symbol;
class UMM_MakeItem_Slot_Special;
class UMM_SharedScrollBox;
class UMM_Slot_Base;
class UMM_Slot_Inventory;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Item_Make_Special_Popup : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_None;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Item_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_Regist_Complete_Btn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_Close_Btn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_MakeItem_Slot_Special*> m_Material_Slot_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_SharedScrollBox* m_ScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Slot_Inventory*> InventoryList;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 mMakeItemID;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 SPECIAL_MATERIAL_TITLE_NAME;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 SPECIAL_MATERIAL_WEAPON;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 SPECIAL_MATERIAL_ARMOR;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 SPECIAL_MATERIAL_ACCESSORY;
    
public:
    UMM_Item_Make_Special_Popup();

    UFUNCTION(BlueprintCallable)
    void OnClickRegistComplete();
    
    UFUNCTION(BlueprintCallable)
    void OnClickMaterialItem(UMM_Slot_Base* pSlot);
    
    UFUNCTION(BlueprintCallable)
    void OnClickInvenSlot(UMM_Slot_Base* SlotWidget);
    
    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

