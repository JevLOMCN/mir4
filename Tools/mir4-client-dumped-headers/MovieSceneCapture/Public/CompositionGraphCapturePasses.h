#pragma once
#include "CoreMinimal.h"
#include "CompositionGraphCapturePasses.generated.h"

USTRUCT(BlueprintType)
struct MOVIESCENECAPTURE_API FCompositionGraphCapturePasses {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Value;
    
    FCompositionGraphCapturePasses();
};

