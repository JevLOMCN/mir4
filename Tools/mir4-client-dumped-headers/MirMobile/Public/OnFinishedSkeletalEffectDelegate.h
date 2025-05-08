#pragma once
#include "CoreMinimal.h"
#include "OnFinishedSkeletalEffectDelegate.generated.h"

class ASkeletalEffect;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFinishedSkeletalEffect, ASkeletalEffect*, SkeletalEffect);

