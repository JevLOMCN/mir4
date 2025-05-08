#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "MyDrawDebugComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMyDrawDebugComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UMyDrawDebugComponent(const FObjectInitializer& ObjectInitializer);

};

