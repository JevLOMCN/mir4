#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=EControllerHand -FallbackName=EControllerHand
#include "MotionTrackedDeviceFunctionLibrary.generated.h"

class UMotionControllerComponent;

UCLASS(Blueprintable)
class HEADMOUNTEDDISPLAY_API UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMotionTrackedDeviceFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetIsControllerMotionTrackingEnabledByDefault(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMotionTrackingEnabledForSource(int32 PlayerIndex, FName SourceName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMotionTrackingEnabledForDevice(int32 PlayerIndex, EControllerHand Hand);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMotionTrackingEnabledForComponent(const UMotionControllerComponent* MotionControllerComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMotionTrackedDeviceCountManagementNecessary();
    
    UFUNCTION(BlueprintCallable)
    static bool IsMotionSourceTracking(int32 PlayerIndex, FName SourceName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMotionTrackingEnabledControllerCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMaximumMotionTrackedControllerCount();
    
    UFUNCTION(BlueprintCallable)
    static FName GetActiveTrackingSystemName();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FName> EnumerateMotionSources();
    
    UFUNCTION(BlueprintCallable)
    static bool EnableMotionTrackingOfSource(int32 PlayerIndex, FName SourceName);
    
    UFUNCTION(BlueprintCallable)
    static bool EnableMotionTrackingOfDevice(int32 PlayerIndex, EControllerHand Hand);
    
    UFUNCTION(BlueprintCallable)
    static bool EnableMotionTrackingForComponent(UMotionControllerComponent* MotionControllerComponent);
    
    UFUNCTION(BlueprintCallable)
    static void DisableMotionTrackingOfSource(int32 PlayerIndex, FName SourceName);
    
    UFUNCTION(BlueprintCallable)
    static void DisableMotionTrackingOfDevice(int32 PlayerIndex, EControllerHand Hand);
    
    UFUNCTION(BlueprintCallable)
    static void DisableMotionTrackingOfControllersForPlayer(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    static void DisableMotionTrackingOfAllControllers();
    
    UFUNCTION(BlueprintCallable)
    static void DisableMotionTrackingForComponent(const UMotionControllerComponent* MotionControllerComponent);
    
};

