#include "BGMTrigger.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

ABGMTrigger::ABGMTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->m_Priority = 0;
    this->m_bBoxRender = false;
    this->m_pBoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComp"));
    this->m_bInit = false;
    this->m_pBoxCollision->SetupAttachment(RootComponent);
}

void ABGMTrigger::PlayFieldBGM(USoundBase* pSound) {
}



