#pragma once
#include "CoreMinimal.h"
#include "BTService_BlackboardBase.h"
#include "BTService_DefaultFocus.generated.h"

UCLASS(Blueprintable)
class AIMODULE_API UBTService_DefaultFocus : public UBTService_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 FocusPriority;
    
public:
    UBTService_DefaultFocus();

};

