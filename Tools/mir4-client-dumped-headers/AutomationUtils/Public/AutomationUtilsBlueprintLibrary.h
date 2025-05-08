#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AutomationUtilsBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class AUTOMATIONUTILS_API UAutomationUtilsBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAutomationUtilsBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void TakeGameplayAutomationScreenshot(const FString& ScreenshotName, float MaxGlobalError, float MaxLocalError, const FString& MapNameOverride);
    
};

