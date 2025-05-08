#pragma once
#include "CoreMinimal.h"
#include "SlateSound.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct SLATECORE_API FSlateSound {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* ResourceObject;
    
public:
    FSlateSound();
};

