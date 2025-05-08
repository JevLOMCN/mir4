#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "NavTestRenderingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNavTestRenderingComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UNavTestRenderingComponent(const FObjectInitializer& ObjectInitializer);

};

