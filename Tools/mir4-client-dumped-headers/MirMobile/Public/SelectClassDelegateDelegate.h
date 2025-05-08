#pragma once
#include "CoreMinimal.h"
#include "SelectClassDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSelectClassDelegate, const int32, ClassID);

