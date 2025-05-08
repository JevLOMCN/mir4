#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_MyCharinfo.generated.h"

class UCanvasPanel;
class UGridPanel;
class UMM_CharInfo;
class UMM_CheckBox_Switch;
class UMM_CombatPoint;
class UMM_Common_Btn;
class UMM_Costume_PartsViewer;
class UMM_Costume_Slot_EquipInfo;
class UMM_EquipSlot_Registered;
class UMM_OptionNum;
class UMirButton;
class UMirImage;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class UMM_MyCharinfo : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_DetailStatBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_CombatPoint* CombatPoint;
    
private:
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_OptionNum* m_OptionNum[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_CharInfo* m_CharInfo;
    
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_EquipSlot_Registered* m_EquipSlot[10];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_Grid_Option;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_Grid_TargetCostume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Costume_PartsViewer* CostumePartsViewerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_CanvasEquipParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Costume_Slot_EquipInfo*> m_CostumeSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_CheckBox_Switch* m_CheckBoxSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_CanvesTerm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_TermItemBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_TermItem_Indicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UGridPanel* Panel_Detail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 STR_SWITCH_ON;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 STR_SWITCH_OFF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_Can_GoToItemMake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_GoToItemMake;
    
public:
    UMM_MyCharinfo();

    UFUNCTION(BlueprintCallable)
    void OnClickSwitch();
    
    UFUNCTION()
    void OnClickEquipSlot(int64 iUID, int32 iTID, int32 iEquipPosition);
    
    UFUNCTION(BlueprintCallable)
    void OnClickDetailStatus();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_TermItem();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_ItemMake();
    
};

