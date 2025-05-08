#pragma once
#include "CoreMinimal.h"
#include "NavGraphNode.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FNavGraphNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Owner;
    
    NAVIGATIONSYSTEM_API FNavGraphNode();
};

