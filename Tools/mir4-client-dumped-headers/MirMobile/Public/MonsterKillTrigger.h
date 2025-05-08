#pragma once
#include "CoreMinimal.h"
#include "ActivateTrigger.h"
#include "MonsterKillTrigger.generated.h"

UCLASS(Blueprintable)
class AMonsterKillTrigger : public AActivateTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bInstantKill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MonsterOrderID;
    
    AMonsterKillTrigger(const FObjectInitializer& ObjectInitializer);

};

