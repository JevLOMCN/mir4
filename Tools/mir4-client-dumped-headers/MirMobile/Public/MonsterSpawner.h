#pragma once
#include "CoreMinimal.h"
#include "ActivateTrigger.h"
#include "MonsterSpawner.generated.h"

class AMM_Monster;
class AMonsterGroupTrigger;

UCLASS(Blueprintable)
class AMonsterSpawner : public AActivateTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MonsterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MonsterOrderID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMonsterGroupTrigger* m_MonsterGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMonsterGroupTrigger* m_prevMonsterGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMM_Monster* m_pMonster;
    
    AMonsterSpawner(const FObjectInitializer& ObjectInitializer);

};

