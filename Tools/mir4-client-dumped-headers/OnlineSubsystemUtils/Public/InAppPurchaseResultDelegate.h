#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystem -ObjectName=EInAppPurchaseState -FallbackName=EInAppPurchaseState
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystem -ObjectName=InAppPurchaseProductInfo -FallbackName=InAppPurchaseProductInfo
#include "InAppPurchaseResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInAppPurchaseResult, TEnumAsByte<EInAppPurchaseState::Type>, CompletionStatus, const FInAppPurchaseProductInfo&, InAppPurchaseInformation);

