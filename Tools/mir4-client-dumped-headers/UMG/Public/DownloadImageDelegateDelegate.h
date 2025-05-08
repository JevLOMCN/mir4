#pragma once
#include "CoreMinimal.h"
#include "DownloadImageDelegateDelegate.generated.h"

class UTexture2DDynamic;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDownloadImageDelegate, UTexture2DDynamic*, Texture);

