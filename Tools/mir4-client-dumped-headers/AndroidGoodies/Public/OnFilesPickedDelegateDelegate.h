#pragma once
#include "CoreMinimal.h"
#include "OnFilesPickedDelegateDelegate.generated.h"

class UAGChosenFile;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnFilesPickedDelegate, const TArray<UAGChosenFile*>&, files);

