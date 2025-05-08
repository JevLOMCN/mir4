#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent
#include "PaperTerrainSplineComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAPER2D_API UPaperTerrainSplineComponent : public USplineComponent {
    GENERATED_BODY()
public:
    UPaperTerrainSplineComponent(const FObjectInitializer& ObjectInitializer);

};

