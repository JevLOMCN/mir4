#pragma once
#include "CoreMinimal.h"
#include "ActivateTrigger.h"
#include "EndPlayTrigger.generated.h"

UCLASS(Blueprintable)
class AEndPlayTrigger : public AActivateTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DelayTime;
    
    AEndPlayTrigger(const FObjectInitializer& ObjectInitializer);

};

