#pragma once
#include "CoreMinimal.h"
#include "ActivateTrigger.h"
#include "NpcShowTrigger.generated.h"

class AMM_NPC;

UCLASS(Blueprintable)
class ANpcShowTrigger : public AActivateTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_NpcShowID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMM_NPC* m_pNpc;
    
    ANpcShowTrigger(const FObjectInitializer& ObjectInitializer);

};

