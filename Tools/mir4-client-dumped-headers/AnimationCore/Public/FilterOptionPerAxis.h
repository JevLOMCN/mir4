#pragma once
#include "CoreMinimal.h"
#include "FilterOptionPerAxis.generated.h"

USTRUCT(BlueprintType)
struct ANIMATIONCORE_API FFilterOptionPerAxis {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bZ;
    
    FFilterOptionPerAxis();
};

