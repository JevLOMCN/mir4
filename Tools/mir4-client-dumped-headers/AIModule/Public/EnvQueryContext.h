#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EnvQueryContext.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class AIMODULE_API UEnvQueryContext : public UObject {
    GENERATED_BODY()
public:
    UEnvQueryContext();

};

