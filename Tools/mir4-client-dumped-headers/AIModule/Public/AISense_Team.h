#pragma once
#include "CoreMinimal.h"
#include "AISense.h"
#include "AITeamStimulusEvent.h"
#include "AISense_Team.generated.h"

UCLASS(Blueprintable)
class AIMODULE_API UAISense_Team : public UAISense {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAITeamStimulusEvent> RegisteredEvents;
    
    UAISense_Team();

};

