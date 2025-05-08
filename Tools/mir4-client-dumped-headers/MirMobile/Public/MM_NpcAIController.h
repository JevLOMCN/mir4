#pragma once
#include "CoreMinimal.h"
#include "MM_AIControllerBase.h"
#include "MM_NpcAIController.generated.h"

class AMM_NPC;

UCLASS(Blueprintable)
class AMM_NpcAIController : public AMM_AIControllerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMM_NPC* m_Npc;
    
public:
    AMM_NpcAIController(const FObjectInitializer& ObjectInitializer);

};

