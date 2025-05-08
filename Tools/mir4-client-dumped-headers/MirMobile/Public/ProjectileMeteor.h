#pragma once
#include "CoreMinimal.h"
#include "ProjectileBase.h"
#include "ProjectileMeteor.generated.h"

UCLASS(Blueprintable)
class AProjectileMeteor : public AProjectileBase {
    GENERATED_BODY()
public:
    AProjectileMeteor(const FObjectInitializer& ObjectInitializer);

};

