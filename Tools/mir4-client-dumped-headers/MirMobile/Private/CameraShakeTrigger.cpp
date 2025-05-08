#include "CameraShakeTrigger.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

ACameraShakeTrigger::ACameraShakeTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
    this->m_pBoxComponent = (UBoxComponent*)RootComponent;
}

void ACameraShakeTrigger::SetShakeAreaExtent(FVector BoxExtent) {
}


