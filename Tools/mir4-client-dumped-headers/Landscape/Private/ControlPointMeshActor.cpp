#include "ControlPointMeshActor.h"
#include "ControlPointMeshComponent.h"

AControlPointMeshActor::AControlPointMeshActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeDamaged = false;
    this->RootComponent = CreateDefaultSubobject<UControlPointMeshComponent>(TEXT("ControlPointMeshComponent0"));
    this->ControlPointMeshComponent = (UControlPointMeshComponent*)RootComponent;
}


