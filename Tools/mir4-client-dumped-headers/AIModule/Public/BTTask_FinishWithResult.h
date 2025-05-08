#pragma once
#include "CoreMinimal.h"
#include "BTTaskNode.h"
#include "EBTNodeResult.h"
#include "BTTask_FinishWithResult.generated.h"

UCLASS(Blueprintable)
class AIMODULE_API UBTTask_FinishWithResult : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EBTNodeResult::Type> Result;
    
public:
    UBTTask_FinishWithResult();

};

