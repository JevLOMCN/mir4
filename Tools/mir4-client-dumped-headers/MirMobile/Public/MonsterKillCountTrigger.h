#pragma once
#include "CoreMinimal.h"
#include "ActivateTrigger.h"
#include "MonsterKillCountTrigger.generated.h"

class AMonsterGroupTrigger;

UCLASS(Blueprintable)
class AMonsterKillCountTrigger : public AActivateTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMonsterGroupTrigger* m_pCheckMonsterGroup;
    
    AMonsterKillCountTrigger(const FObjectInitializer& ObjectInitializer);

};

