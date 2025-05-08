#pragma once
#include "CoreMinimal.h"
#include "ProjectileBase.h"
#include "ProjectileMissile.generated.h"

UCLASS(Blueprintable)
class AProjectileMissile : public AProjectileBase {
    GENERATED_BODY()
public:
    AProjectileMissile(const FObjectInitializer& ObjectInitializer);

};

