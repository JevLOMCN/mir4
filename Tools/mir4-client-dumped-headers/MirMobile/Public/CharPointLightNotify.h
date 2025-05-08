#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "CharPointLightData.h"
#include "CharPointLightNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UCharPointLightNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharPointLightData CharPointLight;
    
    UCharPointLightNotify();

};

