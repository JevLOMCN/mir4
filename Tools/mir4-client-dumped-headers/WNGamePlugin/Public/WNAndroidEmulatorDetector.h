#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "WNAndroidEmulatorDetector.generated.h"

UCLASS(Blueprintable)
class WNGAMEPLUGIN_API UWNAndroidEmulatorDetector : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UWNAndroidEmulatorDetector();

};

