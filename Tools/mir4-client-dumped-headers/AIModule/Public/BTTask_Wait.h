#pragma once
#include "CoreMinimal.h"
#include "BTTaskNode.h"
#include "BTTask_Wait.generated.h"

UCLASS(Blueprintable)
class AIMODULE_API UBTTask_Wait : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomDeviation;
    
    UBTTask_Wait();

};

