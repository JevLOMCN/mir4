#include "ARTrackedImage.h"

UARTrackedImage::UARTrackedImage() {
    this->DetectedImage = NULL;
}

FVector2D UARTrackedImage::GetEstimateSize() {
    return FVector2D{};
}

UARCandidateImage* UARTrackedImage::GetDetectedImage() const {
    return NULL;
}


