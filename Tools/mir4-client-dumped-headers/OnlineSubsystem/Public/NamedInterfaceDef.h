#pragma once
#include "CoreMinimal.h"
#include "NamedInterfaceDef.generated.h"

USTRUCT(BlueprintType)
struct FNamedInterfaceDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InterfaceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InterfaceClassName;
    
    ONLINESUBSYSTEM_API FNamedInterfaceDef();
};

