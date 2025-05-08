#pragma once
#include "CoreMinimal.h"
#include "EventCreatedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FEventCreatedDelegate, const FString&, eventId);

