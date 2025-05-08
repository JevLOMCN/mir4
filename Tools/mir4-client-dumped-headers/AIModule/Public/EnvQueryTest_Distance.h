#pragma once
#include "CoreMinimal.h"
#include "EEnvTestDistance.h"
#include "EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_Distance.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class UEnvQueryTest_Distance : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEnvTestDistance::Type> TestMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> DistanceTo;
    
    UEnvQueryTest_Distance();

};

