#pragma once
#include "CoreMinimal.h"
#include "EnvOverlapData.h"
#include "EnvQueryTest.h"
#include "EnvQueryTest_Overlap.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UEnvQueryTest_Overlap : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnvOverlapData OverlapData;
    
    UEnvQueryTest_Overlap();

};

