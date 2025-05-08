#pragma once
#include "CoreMinimal.h"
#include "EBTDecoratorLogic.h"
#include "BTDecoratorLogic.generated.h"

USTRUCT(BlueprintType)
struct FBTDecoratorLogic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EBTDecoratorLogic::Type> Operation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Number;
    
    AIMODULE_API FBTDecoratorLogic();
};

