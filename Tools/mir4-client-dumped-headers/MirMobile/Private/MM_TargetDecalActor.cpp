#include "MM_TargetDecalActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent

AMM_TargetDecalActor::AMM_TargetDecalActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TestDecalID = 0;
    this->TargetDecalComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystemComponent0"));
}

void AMM_TargetDecalActor::TestFunction1() {
}


