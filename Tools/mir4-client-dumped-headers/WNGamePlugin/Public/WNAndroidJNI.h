#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "WNAndroidJNI.generated.h"

UCLASS(Blueprintable)
class WNGAMEPLUGIN_API UWNAndroidJNI : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UWNAndroidJNI();

};

