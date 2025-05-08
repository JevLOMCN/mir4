#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EVisibilityBasedAnimTickOption -FallbackName=EVisibilityBasedAnimTickOption
#include "MM_ObjectBase.h"
#include "MM_GatherObject.generated.h"

UCLASS(Abstract, Blueprintable)
class AMM_GatherObject : public AMM_ObjectBase {
    GENERATED_BODY()
public:
    AMM_GatherObject(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVisibilityBasedAnimTickOption(EVisibilityBasedAnimTickOption inTickOption);
    
};

