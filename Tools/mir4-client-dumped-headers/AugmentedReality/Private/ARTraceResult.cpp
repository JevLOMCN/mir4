#include "ARTraceResult.h"

FARTraceResult::FARTraceResult() {
    this->DistanceFromCamera = 0.00f;
    this->TraceChannel = EARLineTraceChannels::None;
    this->TrackedGeometry = NULL;
}

