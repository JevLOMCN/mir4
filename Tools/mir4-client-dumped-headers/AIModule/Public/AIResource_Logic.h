#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTasks -ObjectName=GameplayTaskResource -FallbackName=GameplayTaskResource
#include "AIResource_Logic.generated.h"

UCLASS(Blueprintable)
class AIMODULE_API UAIResource_Logic : public UGameplayTaskResource {
    GENERATED_BODY()
public:
    UAIResource_Logic();

};

