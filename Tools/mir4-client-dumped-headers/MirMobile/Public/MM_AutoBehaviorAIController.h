#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "MM_AIControllerBase.h"
#include "MM_AutoBehaviorAIController.generated.h"

UCLASS(Blueprintable)
class AMM_AutoBehaviorAIController : public AMM_AIControllerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> EnableSkills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool HasMoveInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector StartMoveLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ReservedSkillID;
    
public:
    AMM_AutoBehaviorAIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetAutoBehaviorAction();
    
    UFUNCTION(BlueprintCallable)
    bool SearchTarget();
    
    UFUNCTION(BlueprintCallable)
    bool SearchQuestTargetID();
    
    UFUNCTION(BlueprintCallable)
    bool SearchQuestTargetGroupID();
    
    UFUNCTION(BlueprintCallable)
    bool SearchQuestTargetGrade();
    
    UFUNCTION(BlueprintCallable)
    bool SearchQuestTargetAroundNPC();
    
    UFUNCTION(BlueprintCallable)
    bool SearchQuestTarget();
    
    UFUNCTION(BlueprintCallable)
    bool SearchQuestAnyTarget();
    
    UFUNCTION(BlueprintCallable)
    bool SearchGather();
    
    UFUNCTION(BlueprintCallable)
    bool ReturnToCenter();
    
    UFUNCTION(BlueprintCallable)
    void ResetExceptSkillData();
    
    UFUNCTION(BlueprintCallable)
    void ResetDelayTime();
    
    UFUNCTION(BlueprintCallable)
    void NormalAttack();
    
    UFUNCTION(BlueprintCallable)
    bool IsTracing();
    
    UFUNCTION(BlueprintCallable)
    bool IsSetTargetObject();
    
    UFUNCTION(BlueprintCallable)
    bool IsSetTargetCharacter();
    
    UFUNCTION(BlueprintCallable)
    bool IsOperating();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInQuestCompleteZone() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsAttacking();
    
    UFUNCTION(BlueprintCallable)
    void GatherObject();
    
    UFUNCTION(BlueprintCallable)
    void ExcuteSmiteSkills();
    
    UFUNCTION(BlueprintCallable)
    bool ExcuteSkill();
    
    UFUNCTION(BlueprintCallable)
    void ExceptSkillByTargetInDistance(int32 SkillID, float Distance);
    
    UFUNCTION(BlueprintCallable)
    void ExceptSkillByOverHP(int32 SkillID, float Rate);
    
    UFUNCTION(BlueprintCallable)
    void ExceptSkillByNoEnemyInDistance(int32 SkillID, float Distance);
    
    UFUNCTION(BlueprintCallable)
    void ExceptSkillByLessMP(int32 SkillID, float Rate);
    
    UFUNCTION(BlueprintCallable)
    void ExceptSkillByLessHP(int32 SkillID, float Rate);
    
    UFUNCTION(BlueprintCallable)
    void ExceptSkillByHasBuff(int32 SkillID, int32 BuffId);
    
    UFUNCTION(BlueprintCallable)
    void ExceptSkillByEnemyInDistance(int32 SkillID, float Distance);
    
    UFUNCTION(BlueprintCallable)
    bool CheckSmiteSkillByRate(float Rate);
    
    UFUNCTION(BlueprintCallable)
    void CheckSelectTarget();
    
    UFUNCTION(BlueprintCallable)
    void CheckReturnDist();
    
    UFUNCTION(BlueprintCallable)
    bool CheckOnSmiteSkills();
    
    UFUNCTION(BlueprintCallable)
    bool CheckCanSkill();
    
    UFUNCTION(BlueprintCallable)
    void CheckAutoCounterTarget();
    
    UFUNCTION(BlueprintCallable)
    bool CanSkillByTargetOverDistance(int32 SkillID, float Distance, float Rate);
    
    UFUNCTION(BlueprintCallable)
    bool CanSkillByTargetInDistance(int32 SkillID, float Distance, float Rate);
    
    UFUNCTION(BlueprintCallable)
    bool CanSkillByRateOverHP(int32 SkillID, float hpPercent, float Rate);
    
    UFUNCTION(BlueprintCallable)
    bool CanSkillByRateNoBuff(int32 SkillID, int32 BuffId, float Rate);
    
    UFUNCTION(BlueprintCallable)
    bool CanSkillByRateLessHP(int32 SkillID, float hpPercent, float Rate);
    
    UFUNCTION(BlueprintCallable)
    bool CanSkillByRate(int32 SkillID, float Rate);
    
    UFUNCTION(BlueprintCallable)
    bool CanSkillByDeadPartyMember(int32 SkillID, float Distance);
    
};

