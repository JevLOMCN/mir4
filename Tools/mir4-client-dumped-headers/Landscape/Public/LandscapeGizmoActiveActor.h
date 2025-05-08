#pragma once
#include "CoreMinimal.h"
#include "LandscapeGizmoActor.h"
#include "LandscapeGizmoActiveActor.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor {
    GENERATED_BODY()
public:
    ALandscapeGizmoActiveActor(const FObjectInitializer& ObjectInitializer);

};

