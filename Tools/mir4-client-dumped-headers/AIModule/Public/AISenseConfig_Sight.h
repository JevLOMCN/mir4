#pragma once
#include "CoreMinimal.h"
#include "AISenseAffiliationFilter.h"
#include "AISenseConfig.h"
#include "Templates/SubclassOf.h"
#include "AISenseConfig_Sight.generated.h"

class UAISense_Sight;

UCLASS(Blueprintable, EditInlineNew, Config=Engine)
class AIMODULE_API UAISenseConfig_Sight : public UAISenseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAISense_Sight> Implementation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SightRadius;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoseSightRadius;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PeripheralVisionAngleDegrees;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAISenseAffiliationFilter DetectionByAffiliation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoSuccessRangeFromLastSeenLocation;
    
    UAISenseConfig_Sight();

};

