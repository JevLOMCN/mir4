#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ARPose2D.h"
#include "ARSessionStatus.h"
#include "ARTraceResult.h"
#include "ARVideoFormat.h"
#include "EARSessionTrackingFeature.h"
#include "EARSessionType.h"
#include "EARTrackingQuality.h"
#include "EARTrackingQualityReason.h"
#include "EARWorldMappingState.h"
#include "ARBlueprintLibrary.generated.h"

class UARCandidateImage;
class UAREnvironmentCaptureProbe;
class UARLightEstimate;
class UARPin;
class UARPlaneGeometry;
class UARSessionConfig;
class UARTextureCameraDepth;
class UARTextureCameraImage;
class UARTrackedGeometry;
class UARTrackedImage;
class UARTrackedPoint;
class UARTrackedPose;
class UObject;
class USceneComponent;
class UTexture2D;

UCLASS(Blueprintable)
class AUGMENTEDREALITY_API UARBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UARBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void UnpinComponent(USceneComponent* ComponentToUnpin);
    
    UFUNCTION(BlueprintCallable)
    static void StopARSession();
    
    UFUNCTION(BlueprintCallable)
    static void StartARSession(UARSessionConfig* SessionConfig);
    
    UFUNCTION(BlueprintCallable)
    static void SetAlignmentTransform(const FTransform& InAlignmentTransform);
    
    UFUNCTION(BlueprintCallable)
    static void RemovePin(UARPin* PinToRemove);
    
    UFUNCTION(BlueprintCallable)
    static UARPin* PinComponentToTraceResult(USceneComponent* ComponentToPin, const FARTraceResult& TraceResult, const FName DebugName);
    
    UFUNCTION(BlueprintCallable)
    static UARPin* PinComponent(USceneComponent* ComponentToPin, const FTransform& PinToWorldTransform, UARTrackedGeometry* TrackedGeometry, const FName DebugName);
    
    UFUNCTION(BlueprintCallable)
    static void PauseARSession();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FARTraceResult> LineTraceTrackedObjects3D(const FVector Start, const FVector End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FARTraceResult> LineTraceTrackedObjects(const FVector2D ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSessionTypeSupported(EARSessionType SessionType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSessionTrackingFeatureSupported(EARSessionType SessionType, EARSessionTrackingFeature SessionTrackingFeature);
    
    UFUNCTION(BlueprintCallable)
    static bool IsARSupported();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EARWorldMappingState GetWorldMappingStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EARTrackingQualityReason GetTrackingQualityReason();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EARTrackingQuality GetTrackingQuality();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FARVideoFormat> GetSupportedVideoFormats(EARSessionType SessionType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UARSessionConfig* GetSessionConfig();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FVector> GetPointCloud();
    
    UFUNCTION(BlueprintCallable)
    static UARTextureCameraImage* GetPersonSegmentationImage();
    
    UFUNCTION(BlueprintCallable)
    static UARTextureCameraImage* GetPersonSegmentationDepthImage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UARLightEstimate* GetCurrentLightEstimate();
    
    UFUNCTION(BlueprintCallable)
    static UARTextureCameraImage* GetCameraImage();
    
    UFUNCTION(BlueprintCallable)
    static UARTextureCameraDepth* GetCameraDepth();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FARSessionStatus GetARSessionStatus();
    
    UFUNCTION(BlueprintCallable)
    static TArray<UARTrackedPose*> GetAllTrackedPoses();
    
    UFUNCTION(BlueprintCallable)
    static TArray<UARTrackedPoint*> GetAllTrackedPoints();
    
    UFUNCTION(BlueprintCallable)
    static TArray<UARPlaneGeometry*> GetAllTrackedPlanes();
    
    UFUNCTION(BlueprintCallable)
    static TArray<UARTrackedImage*> GetAllTrackedImages();
    
    UFUNCTION(BlueprintCallable)
    static TArray<UAREnvironmentCaptureProbe*> GetAllTrackedEnvironmentCaptureProbes();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FARPose2D> GetAllTracked2DPoses();
    
    UFUNCTION(BlueprintCallable)
    static TArray<UARPin*> GetAllPins();
    
    UFUNCTION(BlueprintCallable)
    static TArray<UARTrackedGeometry*> GetAllGeometries();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DebugDrawTrackedGeometry(UARTrackedGeometry* TrackedGeometry, UObject* WorldContextObject, FLinearColor Color, float OutlineThickness, float PersistForSeconds);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DebugDrawPin(UARPin* ARPin, UObject* WorldContextObject, FLinearColor Color, float Scale, float PersistForSeconds);
    
    UFUNCTION(BlueprintCallable)
    static UARCandidateImage* AddRuntimeCandidateImage(UARSessionConfig* SessionConfig, UTexture2D* CandidateTexture, const FString& FriendlyName, float PhysicalWidth);
    
    UFUNCTION(BlueprintCallable)
    static bool AddManualEnvironmentCaptureProbe(FVector Location, FVector Extent);
    
};

