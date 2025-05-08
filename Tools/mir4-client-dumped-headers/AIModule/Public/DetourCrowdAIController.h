#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "DetourCrowdAIController.generated.h"

UCLASS(Blueprintable)
class ADetourCrowdAIController : public AAIController {
    GENERATED_BODY()
public:
    ADetourCrowdAIController(const FObjectInitializer& ObjectInitializer);

};

