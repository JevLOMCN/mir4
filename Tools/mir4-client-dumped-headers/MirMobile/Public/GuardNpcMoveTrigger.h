#pragma once
#include "CoreMinimal.h"
#include "ActivateTrigger.h"
#include "GuardNpcMoveTrigger.generated.h"

class AGuardNpcSpawnTrigger;
class AMM_Monster;
class ATriggerWayPoint;

UCLASS(Blueprintable)
class AGuardNpcMoveTrigger : public AActivateTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGuardNpcSpawnTrigger* m_pGuardNpcTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATriggerWayPoint* m_pWayPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMM_Monster* m_pGuardNpc;
    
    AGuardNpcMoveTrigger(const FObjectInitializer& ObjectInitializer);

};

