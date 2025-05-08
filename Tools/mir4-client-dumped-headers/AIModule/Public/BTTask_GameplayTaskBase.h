#pragma once
#include "CoreMinimal.h"
#include "BTTaskNode.h"
#include "BTTask_GameplayTaskBase.generated.h"

UCLASS(Abstract, Blueprintable)
class AIMODULE_API UBTTask_GameplayTaskBase : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bWaitForGameplayTask: 1;
    
public:
    UBTTask_GameplayTaskBase();

};

