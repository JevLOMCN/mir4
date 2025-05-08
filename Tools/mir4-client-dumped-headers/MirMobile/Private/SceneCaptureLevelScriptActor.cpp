#include "SceneCaptureLevelScriptActor.h"

ASceneCaptureLevelScriptActor::ASceneCaptureLevelScriptActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentClassType = EClassType::NONE;
    this->CurrentContentsSceneType = EContentsSceneType::NONE;
    this->CurrentCameraType = 0;
    this->SpawnedActor = NULL;
    this->BackGroundActor = NULL;
}

void ASceneCaptureLevelScriptActor::SetCamera(int32 CameraType) {
}

void ASceneCaptureLevelScriptActor::ResetCamera() {
}


void ASceneCaptureLevelScriptActor::Init() {
}


