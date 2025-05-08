#pragma once
#include "CoreMinimal.h"
#include "ProjectileBase.h"
#include "ProjectileCannon.generated.h"

UCLASS(Blueprintable)
class AProjectileCannon : public AProjectileBase {
    GENERATED_BODY()
public:
    AProjectileCannon(const FObjectInitializer& ObjectInitializer);

};

