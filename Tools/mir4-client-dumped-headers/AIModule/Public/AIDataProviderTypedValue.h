#pragma once
#include "CoreMinimal.h"
#include "AIDataProviderValue.h"
#include "Templates/SubclassOf.h"
#include "AIDataProviderTypedValue.generated.h"

class UProperty;

USTRUCT(BlueprintType)
struct AIMODULE_API FAIDataProviderTypedValue : public FAIDataProviderValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UProperty> PropertyType;
    
    FAIDataProviderTypedValue();
};

