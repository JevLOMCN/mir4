#pragma once
#include "CoreMinimal.h"
#include "ActivateTrigger.h"
#include "MonsterMoveTrigger.generated.h"

class AMM_Monster;

UCLASS(Blueprintable)
class AMonsterMoveTrigger : public AActivateTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MonsterOrderID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMM_Monster*> m_MonsterArray;
    
    AMonsterMoveTrigger(const FObjectInitializer& ObjectInitializer);

};

