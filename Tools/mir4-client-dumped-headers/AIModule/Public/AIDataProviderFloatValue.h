#pragma once
#include "CoreMinimal.h"
#include "AIDataProviderTypedValue.h"
#include "AIDataProviderFloatValue.generated.h"

USTRUCT(BlueprintType)
struct AIMODULE_API FAIDataProviderFloatValue : public FAIDataProviderTypedValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultValue;
    
    FAIDataProviderFloatValue();
};

