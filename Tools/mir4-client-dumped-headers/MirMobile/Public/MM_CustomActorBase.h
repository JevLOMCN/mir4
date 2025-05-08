#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "MM_CustomActorBase.generated.h"

UCLASS(Blueprintable)
class AMM_CustomActorBase : public AActor {
    GENERATED_BODY()
public:
    AMM_CustomActorBase(const FObjectInitializer& ObjectInitializer);

};

