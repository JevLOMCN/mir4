#pragma once
#include "CoreMinimal.h"
#include "AIDataProviderFloatValue.h"
#include "EnvQueryTest_Pathfinding.h"
#include "EnvQueryTest_PathfindingBatch.generated.h"

UCLASS(Blueprintable)
class UEnvQueryTest_PathfindingBatch : public UEnvQueryTest_Pathfinding {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue ScanRangeMultiplier;
    
    UEnvQueryTest_PathfindingBatch();

};

