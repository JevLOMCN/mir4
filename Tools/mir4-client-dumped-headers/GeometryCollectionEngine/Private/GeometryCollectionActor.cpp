#include "GeometryCollectionActor.h"
#include "GeometryCollectionComponent.h"

AGeometryCollectionActor::AGeometryCollectionActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UGeometryCollectionComponent>(TEXT("GeometryCollectionComponent0"));
    this->GeometryCollectionComponent = (UGeometryCollectionComponent*)RootComponent;
    this->GeometryCollectionDebugDrawComponent = NULL;
}

bool AGeometryCollectionActor::RaycastSingle(FVector Start, FVector End, FHitResult& OutHit) const {
    return false;
}


