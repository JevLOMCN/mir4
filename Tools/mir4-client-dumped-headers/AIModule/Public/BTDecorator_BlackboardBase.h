#pragma once
#include "CoreMinimal.h"
#include "BTDecorator.h"
#include "BlackboardKeySelector.h"
#include "BTDecorator_BlackboardBase.generated.h"

UCLASS(Abstract, Blueprintable)
class AIMODULE_API UBTDecorator_BlackboardBase : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector BlackboardKey;
    
public:
    UBTDecorator_BlackboardBase();

};

