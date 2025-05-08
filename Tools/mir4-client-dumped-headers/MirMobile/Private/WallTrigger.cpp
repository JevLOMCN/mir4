#include "WallTrigger.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "ETriggerType.h"

AWallTrigger::AWallTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->m_TriggerType = ETriggerType::WALL;
    this->m_pBoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComp"));
    this->m_bWallActivated = false;
    this->m_pBoxCollision->SetupAttachment(RootComponent);
}


