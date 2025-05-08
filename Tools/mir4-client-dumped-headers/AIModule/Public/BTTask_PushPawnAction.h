#pragma once
#include "CoreMinimal.h"
#include "BTTask_PawnActionBase.h"
#include "BTTask_PushPawnAction.generated.h"

class UPawnAction;

UCLASS(Blueprintable)
class AIMODULE_API UBTTask_PushPawnAction : public UBTTask_PawnActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPawnAction* Action;
    
public:
    UBTTask_PushPawnAction();

};

