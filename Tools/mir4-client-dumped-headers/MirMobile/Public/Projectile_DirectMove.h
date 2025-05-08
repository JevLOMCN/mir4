#pragma once
#include "CoreMinimal.h"
#include "ProjectileBase.h"
#include "Projectile_DirectMove.generated.h"

UCLASS(Blueprintable)
class AProjectile_DirectMove : public AProjectileBase {
    GENERATED_BODY()
public:
    AProjectile_DirectMove(const FObjectInitializer& ObjectInitializer);

};

