#include "CompositionGraphCaptureProtocol.h"

UCompositionGraphCaptureProtocol::UCompositionGraphCaptureProtocol() {
    this->bCaptureFramesInHDR = false;
    this->HDRCompressionQuality = 0;
    this->CaptureGamut = HCGM_Rec709;
    this->bDisableScreenPercentage = true;
    this->PostProcessingMaterialPtr = NULL;
}


