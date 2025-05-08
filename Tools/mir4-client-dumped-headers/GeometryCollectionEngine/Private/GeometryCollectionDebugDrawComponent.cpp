#include "GeometryCollectionDebugDrawComponent.h"

UGeometryCollectionDebugDrawComponent::UGeometryCollectionDebugDrawComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GeometryCollectionDebugDrawActor = NULL;
    this->GeometryCollectionRenderLevelSetActor = NULL;
}


