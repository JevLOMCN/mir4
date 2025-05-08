#pragma once
#include "CoreMinimal.h"
#include "PawnActionEvent.generated.h"

class UPawnAction;

USTRUCT(BlueprintType)
struct AIMODULE_API FPawnActionEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPawnAction* Action;
    
    FPawnActionEvent();
};

