#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Hud_ServerVisitMap.generated.h"

class UMM_Common_Btn_Cost;
class UMM_Common_Btn_Symbol;
class UMM_ServerVisit_Waypoint_Category;
class UMirScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class MIRMOBILE_API UMM_Hud_ServerVisitMap : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_Btn_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* m_Scr_WaypointList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Cost* m_Btn_Move;
    
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_ServerVisit_Waypoint_Category* m_arWaypointCategroy[6];
    
public:
    UMM_Hud_ServerVisitMap();

    UFUNCTION(BlueprintCallable)
    void OnClickMove();
    
    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

