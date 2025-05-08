#include "FrameMetrics.h"

FFrameMetrics::FFrameMetrics() {
    this->TotalElapsedTime = 0.00f;
    this->FrameDelta = 0.00f;
    this->FrameNumber = 0;
    this->NumDroppedFrames = 0;
}

