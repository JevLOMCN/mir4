#include "ARCandidateImage.h"

UARCandidateImage::UARCandidateImage() {
    this->CandidateTexture = NULL;
    this->Width = 0.00f;
    this->Height = 0.00f;
    this->Orientation = EARCandidateImageOrientation::Landscape;
}

float UARCandidateImage::GetPhysicalWidth() const {
    return 0.0f;
}

float UARCandidateImage::GetPhysicalHeight() const {
    return 0.0f;
}

EARCandidateImageOrientation UARCandidateImage::GetOrientation() const {
    return EARCandidateImageOrientation::Landscape;
}

FString UARCandidateImage::GetFriendlyName() const {
    return TEXT("");
}

UTexture2D* UARCandidateImage::GetCandidateTexture() const {
    return NULL;
}


