#pragma once
#include "CoreMinimal.h"
#include "EBTDecoratorLogic.generated.h"

UENUM(BlueprintType)
namespace EBTDecoratorLogic {
    enum Type {
        Invalid,
        Test,
        And,
        Or,
        Not,
    };
}

