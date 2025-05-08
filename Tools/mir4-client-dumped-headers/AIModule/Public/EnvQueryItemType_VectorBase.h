#pragma once
#include "CoreMinimal.h"
#include "EnvQueryItemType.h"
#include "EnvQueryItemType_VectorBase.generated.h"

UCLASS(Abstract, Blueprintable)
class AIMODULE_API UEnvQueryItemType_VectorBase : public UEnvQueryItemType {
    GENERATED_BODY()
public:
    UEnvQueryItemType_VectorBase();

};

