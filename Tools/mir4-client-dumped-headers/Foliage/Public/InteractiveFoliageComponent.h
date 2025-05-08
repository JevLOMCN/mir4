#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "InteractiveFoliageComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UInteractiveFoliageComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UInteractiveFoliageComponent(const FObjectInitializer& ObjectInitializer);

};

