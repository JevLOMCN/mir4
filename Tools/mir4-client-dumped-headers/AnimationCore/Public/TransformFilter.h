#pragma once
#include "CoreMinimal.h"
#include "FilterOptionPerAxis.h"
#include "TransformFilter.generated.h"

USTRUCT(BlueprintType)
struct ANIMATIONCORE_API FTransformFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilterOptionPerAxis TranslationFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilterOptionPerAxis RotationFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilterOptionPerAxis ScaleFilter;
    
    FTransformFilter();
};

