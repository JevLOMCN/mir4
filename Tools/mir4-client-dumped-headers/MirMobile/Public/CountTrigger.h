#pragma once
#include "CoreMinimal.h"
#include "ActivateTrigger.h"
#include "CountTrigger.generated.h"

UCLASS(Blueprintable)
class ACountTrigger : public AActivateTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MaxCount;
    
    ACountTrigger(const FObjectInitializer& ObjectInitializer);

};

