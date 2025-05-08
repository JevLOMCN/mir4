#pragma once
#include "CoreMinimal.h"
#include "BTDecorator.h"
#include "BTDecorator_TimeLimit.generated.h"

UCLASS(Blueprintable)
class AIMODULE_API UBTDecorator_TimeLimit : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeLimit;
    
    UBTDecorator_TimeLimit();

};

