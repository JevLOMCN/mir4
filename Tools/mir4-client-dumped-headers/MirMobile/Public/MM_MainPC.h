#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "EAutoBattleState.h"
#include "EAutoMoveState.h"
#include "EBehaviorType.h"
#include "MM_PC.h"
#include "MM_MainPC.generated.h"

class AMM_AutoBehaviorAIController;
class APlayerController;
class UCurveFloat;
class UMM_GhostTrailComponent;
class UMM_GuideDecalComponent;
class UObject;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class AMM_MainPC : public AMM_PC {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* m_pPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* m_pRefVehicleMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* m_pRefVehicleAnimBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_TargetLockOnEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_pSharedTargetEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NearAttackRange;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMM_AutoBehaviorAIController* m_pAutoBehaviorAIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isWallOverlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_GhostTrailComponent* m_GhostComponet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GuideDecalComponent* GuideDecalComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* SubTargetLineEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* MainTargetLineEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAutoMoveState OldAutoMoveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAutoMoveState CurrentAutoMoveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBehaviorType OldBehaviorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBehaviorType BehaviorType;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DarkTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DarkCurve;
    
    AMM_MainPC(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ReserveAutoMoveCheck();
    
    UFUNCTION(BlueprintCallable)
    void OverlapWall();
    
    UFUNCTION(BlueprintCallable)
    void OnLinkProxyPathEntry();
    
    UFUNCTION(BlueprintCallable)
    void OnAutoMoveFinished();
    
    UFUNCTION(BlueprintCallable)
    bool K2_UpdateCenterLocation();
    
    UFUNCTION(BlueprintCallable)
    void K2_SkillAttack();
    
    UFUNCTION(BlueprintCallable)
    void K2_SetBehaviorType(EBehaviorType NewBehaviorType);
    
    UFUNCTION(BlueprintCallable)
    void K2_SetAutoState(EAutoBattleState NewState);
    
    UFUNCTION(BlueprintCallable)
    bool K2_ReturnToCenter(bool Force);
    
    UFUNCTION(BlueprintCallable)
    void K2_NormalAttack();
    
    UFUNCTION(BlueprintCallable)
    bool K2_IsOutOfQuestCompleteCoordRange();
    
    UFUNCTION(BlueprintCallable)
    bool K2_AutoBehaviorFindTargetOnAround();
    
    UFUNCTION(BlueprintCallable)
    bool K2_AutoBehaviorFindTargetInEnemies();
    
    UFUNCTION(BlueprintCallable)
    bool K2_AutoBehaviorFindTargetByQuest();
    
    UFUNCTION(BlueprintCallable)
    bool K2_AutoBehaviorFindGatherObject();
    
    UFUNCTION(BlueprintCallable)
    void HitWall(FHitResult HitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckStartAirWalk();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckEndAirWalk();
    
};

