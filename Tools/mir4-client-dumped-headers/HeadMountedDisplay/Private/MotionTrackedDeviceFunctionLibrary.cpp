#include "MotionTrackedDeviceFunctionLibrary.h"

UMotionTrackedDeviceFunctionLibrary::UMotionTrackedDeviceFunctionLibrary() {
}

void UMotionTrackedDeviceFunctionLibrary::SetIsControllerMotionTrackingEnabledByDefault(bool Enable) {
}

bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForSource(int32 PlayerIndex, FName SourceName) {
    return false;
}

bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForDevice(int32 PlayerIndex, EControllerHand Hand) {
    return false;
}

bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForComponent(const UMotionControllerComponent* MotionControllerComponent) {
    return false;
}

bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackedDeviceCountManagementNecessary() {
    return false;
}

bool UMotionTrackedDeviceFunctionLibrary::IsMotionSourceTracking(int32 PlayerIndex, FName SourceName) {
    return false;
}

int32 UMotionTrackedDeviceFunctionLibrary::GetMotionTrackingEnabledControllerCount() {
    return 0;
}

int32 UMotionTrackedDeviceFunctionLibrary::GetMaximumMotionTrackedControllerCount() {
    return 0;
}

FName UMotionTrackedDeviceFunctionLibrary::GetActiveTrackingSystemName() {
    return NAME_None;
}

TArray<FName> UMotionTrackedDeviceFunctionLibrary::EnumerateMotionSources() {
    return TArray<FName>();
}

bool UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingOfSource(int32 PlayerIndex, FName SourceName) {
    return false;
}

bool UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingOfDevice(int32 PlayerIndex, EControllerHand Hand) {
    return false;
}

bool UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingForComponent(UMotionControllerComponent* MotionControllerComponent) {
    return false;
}

void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfSource(int32 PlayerIndex, FName SourceName) {
}

void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfDevice(int32 PlayerIndex, EControllerHand Hand) {
}

void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfControllersForPlayer(int32 PlayerIndex) {
}

void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfAllControllers() {
}

void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingForComponent(const UMotionControllerComponent* MotionControllerComponent) {
}


