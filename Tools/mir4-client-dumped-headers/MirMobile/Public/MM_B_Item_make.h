#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_B_Item_make.generated.h"

class UCanvasPanel;
class UMM_CommonHorizontalTabSet;
class UMM_CommonVerticalTabSet;
class UMM_Common_Board_Notice;
class UMM_Common_ToggleBtn;
class UMM_Exchange_Tab_HorizonBtn;
class UMM_ItemMake_Inventory;
class UMM_Item_Make_Info;
class UMM_Item_Make_List_Slot;
class UMM_Popup_Material_Change;
class UMirButton;
class UMirCanvasPanel;
class UMirTextBlock;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class UMM_B_Item_make : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* Panel_InventoryRect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Popup_Material_Change* PopUp_Material_Change;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_ItemMake_Inventory* InventoryRect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_CommonVerticalTabSet* SubMenuTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_CommonHorizontalTabSet* MainMenuTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_CommonHorizontalTabSet* MainMenuTab_5Fill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Exchange_Tab_HorizonBtn* HorizonBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Item_Make_Info* ItemMakeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMM_Item_Make_List_Slot> SelectSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_ToggleBtn* Toggle_MakeFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* EmptyPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Board_Notice* m_Notice_Sub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* Txt_EmptyMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_GoToForgeSmelt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCanvasPanel* m_Canvas_GoToForgeSmelt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCanvasPanel* m_Panel_Fail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_Fail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 STRING_EMPTY_MESSAGE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 STRING_FILTER_MAKE;
    
public:
    UMM_B_Item_make();

    UFUNCTION(BlueprintCallable)
    void ToggleMakeFilter(bool IsChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnClickSubMenu(int32 idx, bool bLocked);
    
    UFUNCTION(BlueprintCallable)
    void OnClickMainMenu(int32 idx, bool bLocked);
    
    UFUNCTION(BlueprintCallable)
    void OnClickListSlot(UMM_Item_Make_List_Slot* _Slot);
    
    UFUNCTION(BlueprintCallable)
    void OnClick_ForgeSmelt();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_FailReward();
    
};

