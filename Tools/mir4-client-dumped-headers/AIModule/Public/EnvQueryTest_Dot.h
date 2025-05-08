#pragma once
#include "CoreMinimal.h"
#include "EEnvTestDot.h"
#include "EnvDirection.h"
#include "EnvQueryTest.h"
#include "EnvQueryTest_Dot.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UEnvQueryTest_Dot : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnvDirection LineA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnvDirection LineB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnvTestDot TestMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAbsoluteValue;
    
public:
    UEnvQueryTest_Dot();

};

