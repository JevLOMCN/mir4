#pragma once
#include "CoreMinimal.h"
#include "BTTaskNode.h"
#include "BlackboardKeySelector.h"
#include "BTTask_BlackboardBase.generated.h"

UCLASS(Abstract, Blueprintable)
class AIMODULE_API UBTTask_BlackboardBase : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector BlackboardKey;
    
public:
    UBTTask_BlackboardBase();

};

