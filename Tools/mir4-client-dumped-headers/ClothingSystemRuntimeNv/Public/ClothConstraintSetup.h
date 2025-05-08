#pragma once
#include "CoreMinimal.h"
#include "ClothConstraintSetup.generated.h"

USTRUCT(BlueprintType)
struct FClothConstraintSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Stiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StiffnessMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StretchLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CompressionLimit;
    
    CLOTHINGSYSTEMRUNTIMENV_API FClothConstraintSetup();
};

