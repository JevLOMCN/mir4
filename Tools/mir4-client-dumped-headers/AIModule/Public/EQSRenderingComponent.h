#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "EQSRenderingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AIMODULE_API UEQSRenderingComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UEQSRenderingComponent(const FObjectInitializer& ObjectInitializer);

};

