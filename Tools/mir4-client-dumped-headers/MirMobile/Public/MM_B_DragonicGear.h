#pragma once
#include "CoreMinimal.h"
#include "DragonicGear_SlotEffect.h"
#include "WidgetBase.h"
#include "MM_B_DragonicGear.generated.h"

class UMM_Common_Btn_Symbol;
class UMM_EquipSlot_Registered;
class UMM_NewInventory_DragonicGear;
class UMM_Option_Ability;
class UMirButton;
class UMirImage;
class UMirScrollBox;
class UMirTextBlock;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UMM_B_DragonicGear : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iInventoryID;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_RenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_CombatPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_CB_EquipInfo;
    
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_EquipSlot_Registered* m_arEquipSlot[5];
    
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidget* m_arImgEquipSlotOff[5];
    
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidget* m_arImgEquipSlotOn[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_NewInventory_DragonicGear* m_Inven_DragonicGear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_GoTo_ItemMake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidget* m_Can_EquipInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_CB_EquipInfoClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidget* m_EquipInfoNotice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* m_Scr_EquipInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Option_Ability*> m_arAttributeSlot;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDragonicGear_SlotEffect m_arSlotEffect[5];
    
public:
    UMM_B_DragonicGear();

    UFUNCTION(BlueprintCallable)
    void ShowEquipInfo();
    
    UFUNCTION(BlueprintCallable)
    void PlaySlotEffect_4();
    
    UFUNCTION(BlueprintCallable)
    void PlaySlotEffect_3();
    
    UFUNCTION(BlueprintCallable)
    void PlaySlotEffect_2();
    
    UFUNCTION(BlueprintCallable)
    void PlaySlotEffect_1();
    
    UFUNCTION(BlueprintCallable)
    void PlaySlotEffect_0();
    
    UFUNCTION()
    void OnClickEquipSlot(int64 iUID, int32 iTID, int32 iEquipPosition);
    
    UFUNCTION(BlueprintCallable)
    void GoTo_ItemMake();
    
    UFUNCTION(BlueprintCallable)
    void CloseEquipInfo();
    
};

