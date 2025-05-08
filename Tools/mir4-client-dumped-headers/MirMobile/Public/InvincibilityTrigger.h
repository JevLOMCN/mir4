#pragma once
#include "CoreMinimal.h"
#include "ActivateTrigger.h"
#include "InvincibilityTrigger.generated.h"

UCLASS(Blueprintable)
class AInvincibilityTrigger : public AActivateTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bInvincibility;
    
    AInvincibilityTrigger(const FObjectInitializer& ObjectInitializer);

};

