#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BehaviorTreeTypes.generated.h"

UCLASS(Abstract, Blueprintable)
class AIMODULE_API UBehaviorTreeTypes : public UObject {
    GENERATED_BODY()
public:
    UBehaviorTreeTypes();

};

