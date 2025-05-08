#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_PopUp_ItemInfo_Left.generated.h"

class UMM_Common_Btn;
class UMM_PopUp_ItemInfo;
class UMM_Slot_Inventory;

UCLASS(Blueprintable, EditInlineNew)
class UMM_PopUp_ItemInfo_Left : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Slot_Inventory* m_InventorySlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_LevelUPBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_SmeltingBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_ChangeOptionBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_CombineBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_GetWayBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_TransBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_ItemShareBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_ItemRepairBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_pGoAuction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_CollectionBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_ItemMakeBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_XDracoSealBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_PaintingCollectBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_ItemProudBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_PopUp_ItemInfo* ParentWidget;
    
public:
    UMM_PopUp_ItemInfo_Left();

    UFUNCTION(BlueprintCallable)
    void OnClick_XDracoSeal();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_Trans();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_PaintingCollet();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_ItemShare();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_ItemRepair();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_ItemProud();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_ItemMake();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_GetWay();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_Combine();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_Collection();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_ChangeOption();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_Btn_Smelting();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_Btn_LevelUP();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_Auction();
    
};

