#pragma once
#include "CoreMinimal.h"
#include "BTTaskNode.h"
#include "BTTask_MakeNoise.generated.h"

UCLASS(Blueprintable)
class AIMODULE_API UBTTask_MakeNoise : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Loudnes;
    
    UBTTask_MakeNoise();

};

