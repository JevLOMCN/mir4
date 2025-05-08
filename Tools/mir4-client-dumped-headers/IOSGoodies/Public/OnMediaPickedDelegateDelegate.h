#pragma once
#include "CoreMinimal.h"
#include "IGPickedMedia.h"
#include "OnMediaPickedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnMediaPickedDelegate, FIGPickedMedia, Media);

