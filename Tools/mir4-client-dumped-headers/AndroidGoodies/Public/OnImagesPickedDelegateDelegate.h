#pragma once
#include "CoreMinimal.h"
#include "OnImagesPickedDelegateDelegate.generated.h"

class UAGChosenImage;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnImagesPickedDelegate, const TArray<UAGChosenImage*>&, images);

