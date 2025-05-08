#include "AdjustConfig.h"

FAdjustConfig::FAdjustConfig() {
    this->Environment = EAdjustEnvironment::Sandbox;
    this->LogLevel = EAdjustLogLevel::Verbose;
    this->EventBuffering = false;
    this->SendInBackground = false;
    this->IsDeviceKnown = false;
    this->OpenDeferredDeeplink = false;
    this->PreinstallTracking = false;
    this->HandleSkAdNetwork = false;
    this->AllowiAdInfoReading = false;
    this->AllowAdServicesInfoReading = false;
}

