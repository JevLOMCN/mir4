#pragma once
#include "CoreMinimal.h"
#include "CapturedPixelsID.generated.h"

USTRUCT(BlueprintType)
struct FCapturedPixelsID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> Identifiers;
    
    MOVIESCENECAPTURE_API FCapturedPixelsID();
};

