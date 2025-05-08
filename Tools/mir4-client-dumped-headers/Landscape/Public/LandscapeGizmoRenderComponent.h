#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "LandscapeGizmoRenderComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ULandscapeGizmoRenderComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    ULandscapeGizmoRenderComponent(const FObjectInitializer& ObjectInitializer);

};

