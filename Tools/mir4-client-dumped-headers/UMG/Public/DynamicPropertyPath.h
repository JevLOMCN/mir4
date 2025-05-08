#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PropertyPath -ObjectName=CachedPropertyPath -FallbackName=CachedPropertyPath
#include "DynamicPropertyPath.generated.h"

USTRUCT(BlueprintType)
struct UMG_API FDynamicPropertyPath : public FCachedPropertyPath {
    GENERATED_BODY()
public:
    FDynamicPropertyPath();
};

