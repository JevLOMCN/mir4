#include "UserDefinedCaptureProtocol.h"

UUserDefinedCaptureProtocol::UUserDefinedCaptureProtocol() {
    this->World = NULL;
}

void UUserDefinedCaptureProtocol::StopCapturingFinalPixels() {
}

void UUserDefinedCaptureProtocol::StartCapturingFinalPixels(const FCapturedPixelsID& StreamID) {
}

void UUserDefinedCaptureProtocol::ResolveBuffer(UTexture* Buffer, const FCapturedPixelsID& BufferID) {
}




bool UUserDefinedCaptureProtocol::OnSetup_Implementation() {
    return false;
}






bool UUserDefinedCaptureProtocol::OnCanFinalize_Implementation() const {
    return false;
}


FFrameMetrics UUserDefinedCaptureProtocol::GetCurrentFrameMetrics() const {
    return FFrameMetrics{};
}

FString UUserDefinedCaptureProtocol::GenerateFilename(const FFrameMetrics& InFrameMetrics) const {
    return TEXT("");
}


