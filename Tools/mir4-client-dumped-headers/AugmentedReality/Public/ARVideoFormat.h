#pragma once
#include "CoreMinimal.h"
#include "ARVideoFormat.generated.h"

USTRUCT(BlueprintType)
struct AUGMENTEDREALITY_API FARVideoFormat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Height;
    
    FARVideoFormat();
};

