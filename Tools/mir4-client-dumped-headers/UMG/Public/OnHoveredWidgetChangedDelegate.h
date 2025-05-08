#pragma once
#include "CoreMinimal.h"
#include "OnHoveredWidgetChangedDelegate.generated.h"

class UWidgetComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHoveredWidgetChanged, UWidgetComponent*, WidgetComponent, UWidgetComponent*, PreviousWidgetComponent);

