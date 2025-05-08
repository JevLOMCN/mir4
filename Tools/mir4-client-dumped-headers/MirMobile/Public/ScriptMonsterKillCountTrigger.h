#pragma once
#include "CoreMinimal.h"
#include "ActivateTrigger.h"
#include "ScriptMonsterKillCountTrigger.generated.h"

UCLASS(Blueprintable)
class AScriptMonsterKillCountTrigger : public AActivateTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_MonsterIDArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_MonsterOrderIDArray;
    
    AScriptMonsterKillCountTrigger(const FObjectInitializer& ObjectInitializer);

};

