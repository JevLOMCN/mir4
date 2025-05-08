#pragma once
#include "CoreMinimal.h"
#include "ActivateTrigger.h"
#include "TriggerWayPoint.generated.h"

class ATriggerWayPoint;

UCLASS(Blueprintable)
class ATriggerWayPoint : public AActivateTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATriggerWayPoint* Next;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATriggerWayPoint* prev;
    
    ATriggerWayPoint(const FObjectInitializer& ObjectInitializer);

};

