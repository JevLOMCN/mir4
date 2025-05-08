#pragma once
#include "CoreMinimal.h"
#include "OnSoundLoadCompleteDelegate.generated.h"

class USoundWave;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnSoundLoadComplete, const USoundWave*, LoadedSoundWave, const bool, WasCancelled);

