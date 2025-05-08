#pragma once
#include "CoreMinimal.h"
#include "AIRequestID.h"
#include "EPathFollowingResult.h"
#include "AIMoveCompletedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAIMoveCompletedSignature, FAIRequestID, RequestID, TEnumAsByte<EPathFollowingResult::Type>, Result);

