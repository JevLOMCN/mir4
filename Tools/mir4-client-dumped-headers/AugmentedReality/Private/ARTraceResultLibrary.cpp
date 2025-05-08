#include "ARTraceResultLibrary.h"

UARTraceResultLibrary::UARTraceResultLibrary() {
}

UARTrackedGeometry* UARTraceResultLibrary::GetTrackedGeometry(const FARTraceResult& TraceResult) {
    return NULL;
}

EARLineTraceChannels UARTraceResultLibrary::GetTraceChannel(const FARTraceResult& TraceResult) {
    return EARLineTraceChannels::None;
}

FTransform UARTraceResultLibrary::GetLocalToWorldTransform(const FARTraceResult& TraceResult) {
    return FTransform{};
}

FTransform UARTraceResultLibrary::GetLocalToTrackingTransform(const FARTraceResult& TraceResult) {
    return FTransform{};
}

float UARTraceResultLibrary::GetDistanceFromCamera(const FARTraceResult& TraceResult) {
    return 0.0f;
}


