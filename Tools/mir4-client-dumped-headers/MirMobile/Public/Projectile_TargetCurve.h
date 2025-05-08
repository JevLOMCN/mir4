#pragma once
#include "CoreMinimal.h"
#include "ProjectileBase.h"
#include "Projectile_TargetCurve.generated.h"

UCLASS(Blueprintable)
class AProjectile_TargetCurve : public AProjectileBase {
    GENERATED_BODY()
public:
    AProjectile_TargetCurve(const FObjectInitializer& ObjectInitializer);

};

