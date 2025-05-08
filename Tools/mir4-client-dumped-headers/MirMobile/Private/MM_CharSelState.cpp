#include "MM_CharSelState.h"

AMM_CharSelState::AMM_CharSelState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_pCamera = NULL;
    this->m_pPlanarReflectionComp = NULL;
    this->m_CurrentActor = NULL;
}

void AMM_CharSelState::ZoomScreen(float ZoomLength) {
}

void AMM_CharSelState::SetCharacterSelectLevelData(ACameraActor* pMainCamera, float CameraDefaultFOV, FVector CameraDefaultLocation, FRotator CameraDefaultRotation, FVector ModelingLocation, FRotator ModelingRotation, TArray<ACameraActor*> ZoomCameraActorArray) {
}



