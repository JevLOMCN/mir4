#include "MirSkySphereActor.h"

AMirSkySphereActor::AMirSkySphereActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UseLightMap = false;
    this->ColorsDeterminedBySunPosition = false;
    this->SunBrightness = 0.00f;
    this->CloudSpeed = 0.00f;
    this->CloudOpacity = 0.00f;
    this->StarsBrightness = 0.00f;
    this->SunHeight = 0.00f;
    this->SunRadius = 0.00f;
    this->HorizonFalloff = 0.00f;
}


