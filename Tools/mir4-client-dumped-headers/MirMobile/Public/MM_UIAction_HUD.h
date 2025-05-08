#pragma once
#include "CoreMinimal.h"
#include "EUserGaugeState.h"
#include "MM_UIAction.h"
#include "MM_UIAction_HUD.generated.h"

UCLASS(Blueprintable)
class UMM_UIAction_HUD : public UMM_UIAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUserGaugeState State_HP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUserGaugeState State_MP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HPRate_Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> m_arrSubMenuSlotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iDungeonTracker_TitleID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iDungeonTracker_MessageID;
    
public:
    UMM_UIAction_HUD();

    UFUNCTION(BlueprintCallable)
    void OnClickAcceptInviteConfrim();
    
    UFUNCTION(BlueprintCallable)
    void OnClickAcceptChannelWaitingInviteConfrim();
    
};

