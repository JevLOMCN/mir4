#pragma once
#include "CoreMinimal.h"
#include "AISense.h"
#include "AITouchEvent.h"
#include "AISense_Touch.generated.h"

UCLASS(Blueprintable)
class AIMODULE_API UAISense_Touch : public UAISense {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAITouchEvent> RegisteredEvents;
    
    UAISense_Touch();

};

