#include "MeshReconstructorBase.h"

UMeshReconstructorBase::UMeshReconstructorBase() {
}

void UMeshReconstructorBase::StopReconstruction() {
}

void UMeshReconstructorBase::StartReconstruction() {
}

void UMeshReconstructorBase::PauseReconstruction() {
}

bool UMeshReconstructorBase::IsReconstructionStarted() const {
    return false;
}

bool UMeshReconstructorBase::IsReconstructionPaused() const {
    return false;
}

void UMeshReconstructorBase::DisconnectMRMesh() {
}

void UMeshReconstructorBase::ConnectMRMesh(UMRMeshComponent* Mesh) {
}


