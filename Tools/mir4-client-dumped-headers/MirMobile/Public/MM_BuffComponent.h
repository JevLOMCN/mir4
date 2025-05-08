#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "MM_BuffComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMM_BuffComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UMM_BuffComponent(const FObjectInitializer& ObjectInitializer);

};

