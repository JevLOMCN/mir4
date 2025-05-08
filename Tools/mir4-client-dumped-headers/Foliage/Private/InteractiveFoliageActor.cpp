#include "InteractiveFoliageActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESpawnActorCollisionHandlingMethod -FallbackName=ESpawnActorCollisionHandlingMethod
#include "InteractiveFoliageComponent.h"

AInteractiveFoliageActor::AInteractiveFoliageActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UCapsuleComponent>(TEXT("CollisionCylinder")).SetDefaultSubobjectClass<UInteractiveFoliageComponent>(TEXT("StaticMeshComponent0"))) {
    this->bCanBeDamaged = true;
    this->bCollideWhenPlacing = true;
    this->bCanBeInCluster = false;
    this->SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
    this->CapsuleComponent = (UCapsuleComponent*)RootComponent;
    this->FoliageDamageImpulseScale = 20.00f;
    this->FoliageTouchImpulseScale = 10.00f;
    this->FoliageStiffness = 10.00f;
    this->FoliageStiffnessQuadratic = 0.30f;
    this->FoliageDamping = 2.00f;
    this->MaxDamageImpulse = 100000.00f;
    this->MaxTouchImpulse = 1000.00f;
    this->MaxForce = 100000.00f;
    this->Mass = 1.00f;
}

void AInteractiveFoliageActor::CapsuleTouched(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& OverlapInfo) {
}


