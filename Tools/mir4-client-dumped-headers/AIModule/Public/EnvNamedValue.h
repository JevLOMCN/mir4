#pragma once
#include "CoreMinimal.h"
#include "EAIParamType.h"
#include "EnvNamedValue.generated.h"

USTRUCT(BlueprintType)
struct AIMODULE_API FEnvNamedValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIParamType ParamType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    FEnvNamedValue();
};

