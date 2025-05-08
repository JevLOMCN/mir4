#pragma once
#include "CoreMinimal.h"
#include "EnvQueryGenerator.h"
#include "EnvTraceData.h"
#include "EnvQueryGenerator_ProjectedPoints.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class AIMODULE_API UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnvTraceData ProjectionData;
    
    UEnvQueryGenerator_ProjectedPoints();

};

