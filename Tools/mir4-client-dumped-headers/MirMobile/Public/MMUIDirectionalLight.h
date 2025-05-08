#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "MMUIDirectionalLight.generated.h"

class UMMUIDirectionalLightComponent;

UCLASS(Blueprintable)
class AMMUIDirectionalLight : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMMUIDirectionalLightComponent* LightComponent;
    
    AMMUIDirectionalLight(const FObjectInitializer& ObjectInitializer);

};

