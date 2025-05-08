#pragma once
#include "CoreMinimal.h"
#include "ShopListDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FShopListDelegate, int32, ShopItemID);

