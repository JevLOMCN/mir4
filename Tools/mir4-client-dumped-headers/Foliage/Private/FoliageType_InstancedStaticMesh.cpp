#include "FoliageType_InstancedStaticMesh.h"
#include "FoliageInstancedStaticMeshComponent.h"

UFoliageType_InstancedStaticMesh::UFoliageType_InstancedStaticMesh() {
    this->CustomNavigableGeometry = EHasCustomNavigableGeometry::Yes;
    this->Mesh = NULL;
    this->ComponentClass = UFoliageInstancedStaticMeshComponent::StaticClass();
}


