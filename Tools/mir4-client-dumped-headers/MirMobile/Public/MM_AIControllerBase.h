#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIController -FallbackName=AIController
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "DISTANCE_TYPE.h"
#include "ECharacterType.h"
#include "E_CARDINALPOINTS.h"
#include "E_NOTICE_TARGET.h"
#include "TARGET_TYPE.h"
#include "MM_AIControllerBase.generated.h"

class AMM_CharacterPawnBase;

UCLASS(Blueprintable)
class AMM_AIControllerBase : public AAIController {
    GENERATED_BODY()
public:
    AMM_AIControllerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool WarpToLocation(FVector vPos);
    
    UFUNCTION(BlueprintCallable)
    bool WarpToChar(AMM_CharacterPawnBase* pCharBase);
    
    UFUNCTION(BlueprintCallable)
    bool TraceTarget(AMM_CharacterPawnBase* pTargetChar);
    
    UFUNCTION(BlueprintCallable)
    bool TraceDirTarget(AMM_CharacterPawnBase* pTargetChar, float Distance, float Angle);
    
    UFUNCTION(BlueprintCallable)
    bool ToggleCharShow(AMM_CharacterPawnBase* pCharBase, bool bShow);
    
    UFUNCTION(BlueprintCallable)
    bool SummonMonster(int32 nMonTID, FVector vLoc, float RangeMax, float RangeMin, int32 Num);
    
    UFUNCTION(BlueprintCallable)
    bool Suicide(bool bDyingAni);
    
    UFUNCTION(BlueprintCallable)
    bool StopMoving();
    
    UFUNCTION(BlueprintCallable)
    bool SpawnEffect(FName ParticleName, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void SetTarget(AMM_CharacterPawnBase* pCharBase);
    
    UFUNCTION(BlueprintCallable)
    void SetEnemyTarget(AMM_CharacterPawnBase* pCharBase);
    
    UFUNCTION(BlueprintCallable)
    void SearchTargets(bool bAggressive);
    
    UFUNCTION(BlueprintCallable)
    AMM_CharacterPawnBase* SearchCharacter(ECharacterType eCharType, TARGET_TYPE eTargetType, DISTANCE_TYPE eDistType);
    
    UFUNCTION(BlueprintCallable)
    bool RunAway(float fDist);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveEffect(FName ParticleName);
    
    UFUNCTION(BlueprintCallable)
    bool PlayAni(int32 nEmotionID);
    
    UFUNCTION(BlueprintCallable)
    bool Patrol();
    
    UFUNCTION(BlueprintCallable)
    bool NoticeMsg(int32 MessageID, E_NOTICE_TARGET eType);
    
    UFUNCTION(BlueprintCallable)
    bool MoveToDest(FVector vDestPos);
    
    UFUNCTION(BlueprintCallable)
    bool KillTotem(int32 nTotemTID);
    
    UFUNCTION(BlueprintCallable)
    bool KillMonster(int32 nMonTID);
    
    UFUNCTION(BlueprintCallable)
    bool IsDead(AMM_CharacterPawnBase* pCharBase);
    
    UFUNCTION(BlueprintCallable)
    bool IsCloseToPos(FVector vPos, float fCheckDist);
    
    UFUNCTION(BlueprintCallable)
    bool IsCloseToChar(const AMM_CharacterPawnBase* pChar, float fCheckDist);
    
    UFUNCTION(BlueprintCallable)
    bool HealTarget(int32 nHealValue);
    
    UFUNCTION(BlueprintCallable)
    E_CARDINALPOINTS GetDirectionFromMe(const AMM_CharacterPawnBase* pChar, float Angle);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAttackID(bool bLongAttack);
    
    UFUNCTION(BlueprintCallable)
    bool GenTotem(AMM_CharacterPawnBase* pCharBase, int32 nTotemID, const FVector& Loc);
    
    UFUNCTION(BlueprintCallable)
    bool DelBuffFromChar(AMM_CharacterPawnBase* pCharBase, int32 nBuffTID);
    
    UFUNCTION(BlueprintCallable)
    int32 CompareDistance(const AMM_CharacterPawnBase* pCharA, const AMM_CharacterPawnBase* pCharB);
    
    UFUNCTION(BlueprintCallable)
    bool AttackTarget(int32 nAttackTID);
    
    UFUNCTION(BlueprintCallable)
    bool AddBuffToChar(AMM_CharacterPawnBase* pCharBase, int32 nBuffTID);
    
};

