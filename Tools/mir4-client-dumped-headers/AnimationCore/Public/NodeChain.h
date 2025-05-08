#pragma once
#include "CoreMinimal.h"
#include "NodeChain.generated.h"

USTRUCT(BlueprintType)
struct ANIMATIONCORE_API FNodeChain {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Nodes;
    
    FNodeChain();
};

