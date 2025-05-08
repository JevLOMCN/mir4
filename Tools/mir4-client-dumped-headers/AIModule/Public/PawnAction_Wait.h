#pragma once
#include "CoreMinimal.h"
#include "PawnAction.h"
#include "PawnAction_Wait.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class AIMODULE_API UPawnAction_Wait : public UPawnAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToWait;
    
    UPawnAction_Wait();

};

