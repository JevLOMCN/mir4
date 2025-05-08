#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "WNAndroidAdvertising.generated.h"

UCLASS(Blueprintable)
class WNGAMEPLUGIN_API UWNAndroidAdvertising : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UWNAndroidAdvertising();

};

