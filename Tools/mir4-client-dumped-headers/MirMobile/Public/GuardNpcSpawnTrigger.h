#pragma once
#include "CoreMinimal.h"
#include "ActivateTrigger.h"
#include "GuardNpcSpawnTrigger.generated.h"

class AMM_Monster;
class ATriggerWayPoint;

UCLASS(Blueprintable)
class AGuardNpcSpawnTrigger : public AActivateTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_FriendMonsterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MonsterOrderID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATriggerWayPoint* m_pWayPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMM_Monster* m_pGuardNpc;
    
    AGuardNpcSpawnTrigger(const FObjectInitializer& ObjectInitializer);

};

