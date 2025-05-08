#pragma once
#include "CoreMinimal.h"
#include "AIDataProviderValue.generated.h"

class UAIDataProvider;
class UProperty;

USTRUCT(BlueprintType)
struct AIMODULE_API FAIDataProviderValue {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UProperty* CachedProperty;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIDataProvider* DataBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DataField;
    
    FAIDataProviderValue();
};

