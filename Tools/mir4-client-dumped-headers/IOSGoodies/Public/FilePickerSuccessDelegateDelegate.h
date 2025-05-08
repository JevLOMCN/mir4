#pragma once
#include "CoreMinimal.h"
#include "FilePickerSuccessDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FFilePickerSuccessDelegate, const TArray<FString>&, Paths);

