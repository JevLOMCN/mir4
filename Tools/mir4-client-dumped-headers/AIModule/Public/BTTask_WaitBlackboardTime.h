#pragma once
#include "CoreMinimal.h"
#include "BTTask_Wait.h"
#include "BlackboardKeySelector.h"
#include "BTTask_WaitBlackboardTime.generated.h"

UCLASS(Blueprintable)
class AIMODULE_API UBTTask_WaitBlackboardTime : public UBTTask_Wait {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector BlackboardKey;
    
public:
    UBTTask_WaitBlackboardTime();

};

