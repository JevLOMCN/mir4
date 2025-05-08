#include "GhostTrailEffectActor.h"

AGhostTrailEffectActor::AGhostTrailEffectActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_pGhostTrailOwner = NULL;
    this->m_bInit = false;
    this->m_pGhostTrailData = NULL;
    this->BodyMeshComponent = NULL;
}

void AGhostTrailEffectActor::Event_End() {
}

void AGhostTrailEffectActor::Event_Begin() {
}


