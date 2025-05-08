#pragma once
#include "CoreMinimal.h"
#include "AIPredictionEvent.h"
#include "AISense.h"
#include "AISense_Prediction.generated.h"

class AAIController;
class AActor;
class APawn;

UCLASS(Blueprintable)
class AIMODULE_API UAISense_Prediction : public UAISense {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIPredictionEvent> RegisteredEvents;
    
    UAISense_Prediction();

    UFUNCTION(BlueprintCallable)
    static void RequestPawnPredictionEvent(APawn* Requestor, AActor* PredictedActor, float PredictionTime);
    
    UFUNCTION(BlueprintCallable)
    static void RequestControllerPredictionEvent(AAIController* Requestor, AActor* PredictedActor, float PredictionTime);
    
};

