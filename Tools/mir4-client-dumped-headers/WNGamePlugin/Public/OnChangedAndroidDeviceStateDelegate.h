#pragma once
#include "CoreMinimal.h"
#include "EPostureDeviceState.h"
#include "OnChangedAndroidDeviceStateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangedAndroidDeviceState, EPostureDeviceState, NewDeviceState);

