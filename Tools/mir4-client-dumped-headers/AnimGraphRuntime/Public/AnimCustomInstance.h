#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "AnimCustomInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ANIMGRAPHRUNTIME_API UAnimCustomInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UAnimCustomInstance();

};

