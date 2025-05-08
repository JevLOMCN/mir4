#pragma once
#include "CoreMinimal.h"
#include "AIDamageEvent.h"
#include "AISenseEvent.h"
#include "AISenseEvent_Damage.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class AIMODULE_API UAISenseEvent_Damage : public UAISenseEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDamageEvent Event;
    
    UAISenseEvent_Damage();

};

