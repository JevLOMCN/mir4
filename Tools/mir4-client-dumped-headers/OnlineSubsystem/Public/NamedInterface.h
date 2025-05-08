#pragma once
#include "CoreMinimal.h"
#include "NamedInterface.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FNamedInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InterfaceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* InterfaceObject;
    
    ONLINESUBSYSTEM_API FNamedInterface();
};

