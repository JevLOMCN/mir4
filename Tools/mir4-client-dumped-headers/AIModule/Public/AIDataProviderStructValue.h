#pragma once
#include "CoreMinimal.h"
#include "AIDataProviderValue.h"
#include "AIDataProviderStructValue.generated.h"

USTRUCT(BlueprintType)
struct AIMODULE_API FAIDataProviderStructValue : public FAIDataProviderValue {
    GENERATED_BODY()
public:
    FAIDataProviderStructValue();
};

