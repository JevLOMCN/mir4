#pragma once
#include "CoreMinimal.h"
#include "EnvQueryTest.h"
#include "EnvTraceData.h"
#include "EnvQueryTest_Project.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UEnvQueryTest_Project : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnvTraceData ProjectionData;
    
public:
    UEnvQueryTest_Project();

};

