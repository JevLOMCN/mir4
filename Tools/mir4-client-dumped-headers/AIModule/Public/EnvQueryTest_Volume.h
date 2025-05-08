#pragma once
#include "CoreMinimal.h"
#include "EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_Volume.generated.h"

class AVolume;
class UEnvQueryContext;

UCLASS(Blueprintable, MinimalAPI)
class UEnvQueryTest_Volume : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> VolumeContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVolume> VolumeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDoComplexVolumeTest: 1;
    
public:
    UEnvQueryTest_Volume();

};

