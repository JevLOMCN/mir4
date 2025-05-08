#pragma once
#include "CoreMinimal.h"
#include "ContentsDirectionalLight.h"
#include "ContentsPointLight.h"
#include "ContentsLightValue.generated.h"

USTRUCT(BlueprintType)
struct FContentsLightValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FContentsDirectionalLight DirectionalLightData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FContentsPointLight PointLight1Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FContentsPointLight PointLight2Data;
    
    MIRMOBILE_API FContentsLightValue();
};

