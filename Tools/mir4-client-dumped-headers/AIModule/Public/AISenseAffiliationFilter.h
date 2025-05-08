#pragma once
#include "CoreMinimal.h"
#include "AISenseAffiliationFilter.generated.h"

USTRUCT(BlueprintType)
struct AIMODULE_API FAISenseAffiliationFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDetectEnemies: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDetectNeutrals: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDetectFriendlies: 1;
    
    FAISenseAffiliationFilter();
};

