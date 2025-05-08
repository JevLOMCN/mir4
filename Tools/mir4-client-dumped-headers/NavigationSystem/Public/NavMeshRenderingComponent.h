#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "NavMeshRenderingComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NAVIGATIONSYSTEM_API UNavMeshRenderingComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UNavMeshRenderingComponent(const FObjectInitializer& ObjectInitializer);

};

