#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "PawnMovementComponentPostPhysicsTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FPawnMovementComponentPostPhysicsTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    MIRMOBILE_API FPawnMovementComponentPostPhysicsTickFunction();
};

template<>
struct TStructOpsTypeTraits<FPawnMovementComponentPostPhysicsTickFunction> : public TStructOpsTypeTraitsBase2<FPawnMovementComponentPostPhysicsTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

