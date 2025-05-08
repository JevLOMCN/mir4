#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_B_Costume.generated.h"

class UImage;
class UMM_Common_Btn_Cost;
class UMM_Common_Btn_IconText;
class UMM_Common_ToolTipBtn;
class UMM_Costume_CombatPoint;
class UMM_Costume_Inventory;
class UMM_Costume_PartsViewer;
class UMM_PopUp_Costume_CollectionList;
class UMM_PopUp_Costume_Palette;
class UMirImage;

UCLASS(Blueprintable, EditInlineNew)
class UMM_B_Costume : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Costume_PartsViewer* CostumePartsViewerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Costume_Inventory* CostumeInventoryWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_PopUp_Costume_CollectionList* CollectionListWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* Img_RenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* m_TargetPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Cost* Btn_MainCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_IconText* Btn_Restore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_IconText* Btn_Palette;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Costume_CombatPoint* Costume_CombatPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_PopUp_Costume_Palette* PopUp_Palette;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_ToolTipBtn* BtnTooltip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 STR_PurchaseDesc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 STR_PurchaseAble;
    
public:
    UMM_B_Costume();

private:
    UFUNCTION(BlueprintCallable)
    void OnClickRestore();
    
    UFUNCTION(BlueprintCallable)
    void OnClickPalette();
    
    UFUNCTION(BlueprintCallable)
    void OnClickMainButton();
    
};

