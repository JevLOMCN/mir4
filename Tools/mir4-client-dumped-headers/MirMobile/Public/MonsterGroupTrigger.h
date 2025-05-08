#pragma once
#include "CoreMinimal.h"
#include "ActivateTrigger.h"
#include "MonsterGroupTrigger.generated.h"

class AMonsterKillCountTrigger;
class AMonsterSpawner;

UCLASS(Blueprintable)
class AMonsterGroupTrigger : public AActivateTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bRegen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RegenDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMonsterSpawner*> m_SpawnerArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bLinkGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMonsterKillCountTrigger* m_pKillCount;
    
    AMonsterGroupTrigger(const FObjectInitializer& ObjectInitializer);

};

