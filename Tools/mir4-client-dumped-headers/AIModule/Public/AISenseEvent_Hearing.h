#pragma once
#include "CoreMinimal.h"
#include "AINoiseEvent.h"
#include "AISenseEvent.h"
#include "AISenseEvent_Hearing.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class AIMODULE_API UAISenseEvent_Hearing : public UAISenseEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAINoiseEvent Event;
    
public:
    UAISenseEvent_Hearing();

};

