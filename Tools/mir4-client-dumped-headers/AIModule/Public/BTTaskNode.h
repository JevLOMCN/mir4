#pragma once
#include "CoreMinimal.h"
#include "BTNode.h"
#include "BTTaskNode.generated.h"

class UBTService;

UCLASS(Abstract, Blueprintable)
class AIMODULE_API UBTTaskNode : public UBTNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBTService*> Services;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreRestartSelf: 1;
    
public:
    UBTTaskNode();

};

