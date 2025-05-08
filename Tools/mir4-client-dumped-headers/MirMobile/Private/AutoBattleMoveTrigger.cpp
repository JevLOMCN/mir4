#include "AutoBattleMoveTrigger.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

AAutoBattleMoveTrigger::AAutoBattleMoveTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->Next = NULL;
    this->prev = NULL;
    this->m_TriggerIndex = 0;
    this->m_bManualMove = false;
    this->m_pBoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComp"));
    this->m_CurrentCollisionState = ECollisionEnabled::NoCollision;
    this->m_pBoxCollision->SetupAttachment(RootComponent);
}


