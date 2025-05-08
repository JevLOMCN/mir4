#pragma once
#include "CoreMinimal.h"
#include "ARGetCandidateObjectPinDelegate.generated.h"

class UARCandidateObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FARGetCandidateObjectPin, UARCandidateObject*, SavedObject);

