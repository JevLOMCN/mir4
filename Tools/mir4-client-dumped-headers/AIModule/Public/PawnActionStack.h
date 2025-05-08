#pragma once
#include "CoreMinimal.h"
#include "PawnActionStack.generated.h"

class UPawnAction;

USTRUCT(BlueprintType)
struct AIMODULE_API FPawnActionStack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPawnAction* TopAction;
    
public:
    FPawnActionStack();
};

