#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_B_GreatBuilding.generated.h"

class UMM_BuildingSimpleInfo;
class UMM_GreatBuildingMainSlot;
class UMirButton;
class UMirScrollBox;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMM_B_GreatBuilding : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_EndStepUpStr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_EndSubStepUpStr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_CombatStr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_GuildSupportEndStr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_BuildingOpenStr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_BuildingSimpleInfo* m_SimpleInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_StartAni;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* m_ScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_Back;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, UMM_GreatBuildingMainSlot*> m_BuildingSlots;
    
public:
    UMM_B_GreatBuilding();

    UFUNCTION(BlueprintCallable)
    void OnClickBack();
    
};

