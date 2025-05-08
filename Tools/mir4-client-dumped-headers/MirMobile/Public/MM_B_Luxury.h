#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_B_Luxury.generated.h"

class UImage;
class UMM_Common_Btn;
class UMM_Common_Btn_IconText;
class UMM_Costume_CombatPoint;
class UMM_Costume_PartsViewer;
class UMM_Luxury_Inventory;
class UMM_VehicleInfo;
class UMirCanvasPanel;
class UMirImage;

UCLASS(Blueprintable, EditInlineNew)
class UMM_B_Luxury : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* Img_RenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* m_Char_TargetPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_VehicleInfo* m_VehicleInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* m_Vehicle_TargetPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* Btn_Main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_IconText* Btn_Restore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Costume_PartsViewer* LuxuryPartsViewerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Luxury_Inventory* LuxuryInventoryWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Costume_CombatPoint* Luxury_CombatPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCanvasPanel* m_CanvasVehicle;
    
public:
    UMM_B_Luxury();

private:
    UFUNCTION(BlueprintCallable)
    void OnClickRestore();
    
    UFUNCTION(BlueprintCallable)
    void OnClickMainButton();
    
};

