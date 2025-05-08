#pragma once
#include "CoreMinimal.h"
#include "OnImageReadyDelegateDelegate.generated.h"

class UTexture2D;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnImageReadyDelegate, UTexture2D*, Texture);

