#include "ARBlueprintLibrary.h"

UARBlueprintLibrary::UARBlueprintLibrary() {
}

void UARBlueprintLibrary::UnpinComponent(USceneComponent* ComponentToUnpin) {
}

void UARBlueprintLibrary::StopARSession() {
}

void UARBlueprintLibrary::StartARSession(UARSessionConfig* SessionConfig) {
}

void UARBlueprintLibrary::SetAlignmentTransform(const FTransform& InAlignmentTransform) {
}

void UARBlueprintLibrary::RemovePin(UARPin* PinToRemove) {
}

UARPin* UARBlueprintLibrary::PinComponentToTraceResult(USceneComponent* ComponentToPin, const FARTraceResult& TraceResult, const FName DebugName) {
    return NULL;
}

UARPin* UARBlueprintLibrary::PinComponent(USceneComponent* ComponentToPin, const FTransform& PinToWorldTransform, UARTrackedGeometry* TrackedGeometry, const FName DebugName) {
    return NULL;
}

void UARBlueprintLibrary::PauseARSession() {
}

TArray<FARTraceResult> UARBlueprintLibrary::LineTraceTrackedObjects3D(const FVector Start, const FVector End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon) {
    return TArray<FARTraceResult>();
}

TArray<FARTraceResult> UARBlueprintLibrary::LineTraceTrackedObjects(const FVector2D ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon) {
    return TArray<FARTraceResult>();
}

bool UARBlueprintLibrary::IsSessionTypeSupported(EARSessionType SessionType) {
    return false;
}

bool UARBlueprintLibrary::IsSessionTrackingFeatureSupported(EARSessionType SessionType, EARSessionTrackingFeature SessionTrackingFeature) {
    return false;
}

bool UARBlueprintLibrary::IsARSupported() {
    return false;
}

EARWorldMappingState UARBlueprintLibrary::GetWorldMappingStatus() {
    return EARWorldMappingState::NotAvailable;
}

EARTrackingQualityReason UARBlueprintLibrary::GetTrackingQualityReason() {
    return EARTrackingQualityReason::None;
}

EARTrackingQuality UARBlueprintLibrary::GetTrackingQuality() {
    return EARTrackingQuality::NotTracking;
}

TArray<FARVideoFormat> UARBlueprintLibrary::GetSupportedVideoFormats(EARSessionType SessionType) {
    return TArray<FARVideoFormat>();
}

UARSessionConfig* UARBlueprintLibrary::GetSessionConfig() {
    return NULL;
}

TArray<FVector> UARBlueprintLibrary::GetPointCloud() {
    return TArray<FVector>();
}

UARTextureCameraImage* UARBlueprintLibrary::GetPersonSegmentationImage() {
    return NULL;
}

UARTextureCameraImage* UARBlueprintLibrary::GetPersonSegmentationDepthImage() {
    return NULL;
}

UARLightEstimate* UARBlueprintLibrary::GetCurrentLightEstimate() {
    return NULL;
}

UARTextureCameraImage* UARBlueprintLibrary::GetCameraImage() {
    return NULL;
}

UARTextureCameraDepth* UARBlueprintLibrary::GetCameraDepth() {
    return NULL;
}

FARSessionStatus UARBlueprintLibrary::GetARSessionStatus() {
    return FARSessionStatus{};
}

TArray<UARTrackedPose*> UARBlueprintLibrary::GetAllTrackedPoses() {
    return TArray<UARTrackedPose*>();
}

TArray<UARTrackedPoint*> UARBlueprintLibrary::GetAllTrackedPoints() {
    return TArray<UARTrackedPoint*>();
}

TArray<UARPlaneGeometry*> UARBlueprintLibrary::GetAllTrackedPlanes() {
    return TArray<UARPlaneGeometry*>();
}

TArray<UARTrackedImage*> UARBlueprintLibrary::GetAllTrackedImages() {
    return TArray<UARTrackedImage*>();
}

TArray<UAREnvironmentCaptureProbe*> UARBlueprintLibrary::GetAllTrackedEnvironmentCaptureProbes() {
    return TArray<UAREnvironmentCaptureProbe*>();
}

TArray<FARPose2D> UARBlueprintLibrary::GetAllTracked2DPoses() {
    return TArray<FARPose2D>();
}

TArray<UARPin*> UARBlueprintLibrary::GetAllPins() {
    return TArray<UARPin*>();
}

TArray<UARTrackedGeometry*> UARBlueprintLibrary::GetAllGeometries() {
    return TArray<UARTrackedGeometry*>();
}

void UARBlueprintLibrary::DebugDrawTrackedGeometry(UARTrackedGeometry* TrackedGeometry, UObject* WorldContextObject, FLinearColor Color, float OutlineThickness, float PersistForSeconds) {
}

void UARBlueprintLibrary::DebugDrawPin(UARPin* ARPin, UObject* WorldContextObject, FLinearColor Color, float Scale, float PersistForSeconds) {
}

UARCandidateImage* UARBlueprintLibrary::AddRuntimeCandidateImage(UARSessionConfig* SessionConfig, UTexture2D* CandidateTexture, const FString& FriendlyName, float PhysicalWidth) {
    return NULL;
}

bool UARBlueprintLibrary::AddManualEnvironmentCaptureProbe(FVector Location, FVector Extent) {
    return false;
}


