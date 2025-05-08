#include "ARSessionConfig.h"

UARSessionConfig::UARSessionConfig() {
    this->bGenerateMeshDataFromTrackedGeometry = false;
    this->bGenerateCollisionForMeshData = false;
    this->bGenerateNavMeshForMeshData = false;
    this->bUseMeshDataForOcclusion = false;
    this->bRenderMeshDataInWireframe = false;
    this->bTrackSceneObjects = true;
    this->bUsePersonSegmentationForOcclusion = true;
    this->WorldAlignment = EARWorldAlignment::Gravity;
    this->SessionType = EARSessionType::World;
    this->PlaneDetectionMode = EARPlaneDetectionMode::HorizontalPlaneDetection;
    this->bHorizontalPlaneDetection = true;
    this->bVerticalPlaneDetection = true;
    this->bEnableAutoFocus = true;
    this->LightEstimationMode = EARLightEstimationMode::AmbientLightEstimate;
    this->FrameSyncMode = EARFrameSyncMode::SyncTickWithoutCameraImage;
    this->bEnableAutomaticCameraOverlay = true;
    this->bEnableAutomaticCameraTracking = true;
    this->bResetCameraTracking = true;
    this->bResetTrackedObjects = true;
    this->MaxNumSimultaneousImagesTracked = 1;
    this->EnvironmentCaptureProbeType = EAREnvironmentCaptureProbeType::None;
    this->FaceTrackingDirection = EARFaceTrackingDirection::FaceRelative;
    this->FaceTrackingUpdate = EARFaceTrackingUpdate::CurvesAndGeo;
    this->EnabledSessionTrackingFeature = EARSessionTrackingFeature::None;
}

bool UARSessionConfig::ShouldResetTrackedObjects() const {
    return false;
}

bool UARSessionConfig::ShouldResetCameraTracking() const {
    return false;
}

bool UARSessionConfig::ShouldRenderCameraOverlay() const {
    return false;
}

bool UARSessionConfig::ShouldEnableCameraTracking() const {
    return false;
}

bool UARSessionConfig::ShouldEnableAutoFocus() const {
    return false;
}

void UARSessionConfig::SetWorldMapData(TArray<uint8> NewWorldMapData) {
}

void UARSessionConfig::SetSessionTrackingFeatureToEnable(EARSessionTrackingFeature InSessionTrackingFeature) {
}

void UARSessionConfig::SetResetTrackedObjects(bool bNewValue) {
}

void UARSessionConfig::SetResetCameraTracking(bool bNewValue) {
}

void UARSessionConfig::SetFaceTrackingUpdate(EARFaceTrackingUpdate InUpdate) {
}

void UARSessionConfig::SetFaceTrackingDirection(EARFaceTrackingDirection InDirection) {
}

void UARSessionConfig::SetEnableAutoFocus(bool bNewValue) {
}

void UARSessionConfig::SetDesiredVideoFormat(FARVideoFormat NewFormat) {
}

void UARSessionConfig::SetCandidateObjectList(const TArray<UARCandidateObject*>& InCandidateObjects) {
}

TArray<uint8> UARSessionConfig::GetWorldMapData() const {
    return TArray<uint8>();
}

EARWorldAlignment UARSessionConfig::GetWorldAlignment() const {
    return EARWorldAlignment::Gravity;
}

EARSessionType UARSessionConfig::GetSessionType() const {
    return EARSessionType::None;
}

EARPlaneDetectionMode UARSessionConfig::GetPlaneDetectionMode() const {
    return EARPlaneDetectionMode::None;
}

int32 UARSessionConfig::GetMaxNumSimultaneousImagesTracked() const {
    return 0;
}

EARLightEstimationMode UARSessionConfig::GetLightEstimationMode() const {
    return EARLightEstimationMode::None;
}

EARFrameSyncMode UARSessionConfig::GetFrameSyncMode() const {
    return EARFrameSyncMode::SyncTickWithCameraImage;
}

EARFaceTrackingUpdate UARSessionConfig::GetFaceTrackingUpdate() const {
    return EARFaceTrackingUpdate::CurvesAndGeo;
}

EARFaceTrackingDirection UARSessionConfig::GetFaceTrackingDirection() const {
    return EARFaceTrackingDirection::FaceRelative;
}

EAREnvironmentCaptureProbeType UARSessionConfig::GetEnvironmentCaptureProbeType() const {
    return EAREnvironmentCaptureProbeType::None;
}

EARSessionTrackingFeature UARSessionConfig::GetEnabledSessionTrackingFeature() const {
    return EARSessionTrackingFeature::None;
}

FARVideoFormat UARSessionConfig::GetDesiredVideoFormat() const {
    return FARVideoFormat{};
}

TArray<UARCandidateObject*> UARSessionConfig::GetCandidateObjectList() const {
    return TArray<UARCandidateObject*>();
}

TArray<UARCandidateImage*> UARSessionConfig::GetCandidateImageList() const {
    return TArray<UARCandidateImage*>();
}

void UARSessionConfig::AddCandidateObject(UARCandidateObject* CandidateObject) {
}

void UARSessionConfig::AddCandidateImage(UARCandidateImage* NewCandidateImage) {
}


