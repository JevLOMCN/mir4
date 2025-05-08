#include "TimeManagementBlueprintLibrary.h"

UTimeManagementBlueprintLibrary::UTimeManagementBlueprintLibrary() {
}

FFrameTime UTimeManagementBlueprintLibrary::TransformTime(const FFrameTime& SourceTime, const FFrameRate& SourceRate, const FFrameRate& DestinationRate) {
    return FFrameTime{};
}

FFrameNumber UTimeManagementBlueprintLibrary::Subtract_FrameNumberInteger(FFrameNumber A, int32 B) {
    return FFrameNumber{};
}

FFrameNumber UTimeManagementBlueprintLibrary::Subtract_FrameNumberFrameNumber(FFrameNumber A, FFrameNumber B) {
    return FFrameNumber{};
}

FFrameTime UTimeManagementBlueprintLibrary::SnapFrameTimeToRate(const FFrameTime& SourceTime, const FFrameRate& SourceRate, const FFrameRate& SnapToRate) {
    return FFrameTime{};
}

FFrameTime UTimeManagementBlueprintLibrary::Multiply_SecondsFrameRate(float TimeInSeconds, const FFrameRate& FrameRate) {
    return FFrameTime{};
}

FFrameNumber UTimeManagementBlueprintLibrary::Multiply_FrameNumberInteger(FFrameNumber A, int32 B) {
    return FFrameNumber{};
}

bool UTimeManagementBlueprintLibrary::IsValid_MultipleOf(const FFrameRate& InFrameRate, const FFrameRate& OtherFramerate) {
    return false;
}

bool UTimeManagementBlueprintLibrary::IsValid_Framerate(const FFrameRate& InFrameRate) {
    return false;
}

FFrameRate UTimeManagementBlueprintLibrary::GetTimecodeFrameRate() {
    return FFrameRate{};
}

FTimecode UTimeManagementBlueprintLibrary::GetTimecode() {
    return FTimecode{};
}

FFrameNumber UTimeManagementBlueprintLibrary::Divide_FrameNumberInteger(FFrameNumber A, int32 B) {
    return FFrameNumber{};
}

FString UTimeManagementBlueprintLibrary::Conv_TimecodeToString(const FTimecode& InTimecode, bool bForceSignDisplay) {
    return TEXT("");
}

float UTimeManagementBlueprintLibrary::Conv_QualifiedFrameTimeToSeconds(const FQualifiedFrameTime& InFrameTime) {
    return 0.0f;
}

float UTimeManagementBlueprintLibrary::Conv_FrameRateToSeconds(const FFrameRate& InFrameRate) {
    return 0.0f;
}

int32 UTimeManagementBlueprintLibrary::Conv_FrameNumberToInteger(const FFrameNumber& InFrameNumber) {
    return 0;
}

FFrameNumber UTimeManagementBlueprintLibrary::Add_FrameNumberInteger(FFrameNumber A, int32 B) {
    return FFrameNumber{};
}

FFrameNumber UTimeManagementBlueprintLibrary::Add_FrameNumberFrameNumber(FFrameNumber A, FFrameNumber B) {
    return FFrameNumber{};
}


