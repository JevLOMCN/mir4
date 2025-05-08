#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystem -ObjectName=InAppPurchaseProductInfo -FallbackName=InAppPurchaseProductInfo
#include "InAppPurchaseQueryResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInAppPurchaseQueryResult, const TArray<FInAppPurchaseProductInfo>&, InAppPurchaseInformation);

