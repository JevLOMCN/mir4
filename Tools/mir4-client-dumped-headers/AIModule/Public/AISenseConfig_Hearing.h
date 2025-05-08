#pragma once
#include "CoreMinimal.h"
#include "AISenseAffiliationFilter.h"
#include "AISenseConfig.h"
#include "Templates/SubclassOf.h"
#include "AISenseConfig_Hearing.generated.h"

class UAISense_Hearing;

UCLASS(Blueprintable, EditInlineNew, Config=Engine)
class AIMODULE_API UAISenseConfig_Hearing : public UAISenseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAISense_Hearing> Implementation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HearingRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoSHearingRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseLoSHearing: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAISenseAffiliationFilter DetectionByAffiliation;
    
    UAISenseConfig_Hearing();

};

