#pragma once
#include "CoreMinimal.h"
#include "ChaosCollisionEventData.h"
#include "OnChaosCollisionEventsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChaosCollisionEvents, const TArray<FChaosCollisionEventData>&, CollisionEvents);

