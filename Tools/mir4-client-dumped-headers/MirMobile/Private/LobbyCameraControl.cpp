#include "LobbyCameraControl.h"

ALobbyCameraControl::ALobbyCameraControl(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_pAutoCameraData = NULL;
    this->m_pMediaSoundActor = NULL;
    this->m_pCameraParticleComponent = NULL;
    this->m_pScriptCameraShake = NULL;
}

void ALobbyCameraControl::UpdateLockOnCamera_Implementation(FVector CurrentLoc, FRotator CurrentRot, FVector& RefLoc, FRotator& RefRot) {
}


void ALobbyCameraControl::StopScriptCameraShake() {
}


void ALobbyCameraControl::SetCameraTarget(AMM_EntityBase* pCharacter) {
}


void ALobbyCameraControl::PlayScriptCameraShake(float Duration) {
}


void ALobbyCameraControl::CirculationCameraMode() {
}


