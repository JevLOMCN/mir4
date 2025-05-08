#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EMiniGameMonsterGrade.h"
#include "EMiniGameMonsterMoveDirection.h"
#include "EMiniGameMonsterState.h"
#include "MiniGame_MonsterActor.generated.h"

class AMiniGame_ManagerActor;
class UMiniGameData;

UCLASS(Blueprintable)
class AMiniGame_MonsterActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCurFlipbookLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCurPlayerPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMiniGameData* m_MiniGameData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMiniGame_ManagerActor* m_MiniGameActor;
    
public:
    AMiniGame_MonsterActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowMonsterActor_BP(bool bShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowHitEffectFilpbook_BP(FVector vScale, FVector vLoc, float fDelay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowAttackEffectFilpbook_BP(EMiniGameMonsterState eState, FVector vScale, FVector vLoc, float fDelay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHPBarPercent(float Percent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PauseFilpbook_BP(bool bPause);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HitBlank_BP(float fStartTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetMonsterScale_BP();
    
    UFUNCTION(BlueprintCallable)
    AMiniGame_ManagerActor* GetMiniGameActor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeFlipbook_BP(EMiniGameMonsterState eState, EMiniGameMonsterMoveDirection eDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeDisplayByMonsterGrade_BP(EMiniGameMonsterGrade eGrade);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeDirection_BP(EMiniGameMonsterMoveDirection eDirection);
    
};

