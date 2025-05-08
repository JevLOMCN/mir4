#pragma once
#include "CoreMinimal.h"
#include "ProjectileBase.h"
#include "ProjectileBullet.generated.h"

UCLASS(Blueprintable)
class AProjectileBullet : public AProjectileBase {
    GENERATED_BODY()
public:
    AProjectileBullet(const FObjectInitializer& ObjectInitializer);

};

