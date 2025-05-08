#pragma once
#include "CoreMinimal.h"
#include "EnvQueryItemType_VectorBase.h"
#include "EnvQueryItemType_ActorBase.generated.h"

UCLASS(Abstract, Blueprintable)
class AIMODULE_API UEnvQueryItemType_ActorBase : public UEnvQueryItemType_VectorBase {
    GENERATED_BODY()
public:
    UEnvQueryItemType_ActorBase();

};

