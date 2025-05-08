#pragma once
#include "CoreMinimal.h"
#include "EMonsterAttackType.h"
#include "MM_AIControllerBase.h"
#include "MM_MonsterAIController.generated.h"

class AMM_Monster;

UCLASS(Blueprintable)
class AMM_MonsterAIController : public AMM_AIControllerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMM_Monster* m_Monster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EMonsterAttackType LastAttackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentShortSkillSetIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool HasShortSkills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentLongSkillSetIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool HasLongSkills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool EnoughAttackToUseSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PickupedNormalAttackCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NormalAttackCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurAttackTID;
    
public:
    AMM_MonsterAIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    int32 SetShortAttackID(int32 nIdx);
    
    UFUNCTION(BlueprintCallable)
    bool SetLongAttackRate(int32 idx);
    
    UFUNCTION(BlueprintCallable)
    int32 SetLongAttackID(int32 nIdx);
    
    UFUNCTION(BlueprintCallable)
    bool SetAttackRate(int32 idx);
    
    UFUNCTION(BlueprintCallable)
    void SearchTargetMonster(int32 nTID);
    
    UFUNCTION(BlueprintCallable)
    bool ReturnToHome();
    
    UFUNCTION(BlueprintCallable)
    void K2_UpdateNearfieldAttack();
    
    UFUNCTION(BlueprintCallable)
    bool IsExcessAttackCoolTime();
    
};

