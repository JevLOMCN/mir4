#pragma once
#include "CoreMinimal.h"
#include "OnImagePickedDelegateDelegate.generated.h"

class UTexture2D;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnImagePickedDelegate, UTexture2D*, Texture);

