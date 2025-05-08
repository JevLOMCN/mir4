#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "ARBaseAsyncTaskBlueprintProxy.generated.h"

UCLASS(Abstract, Blueprintable)
class AUGMENTEDREALITY_API UARBaseAsyncTaskBlueprintProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UARBaseAsyncTaskBlueprintProxy();

};

