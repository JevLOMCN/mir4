#include "GuardNpcEnterCheckTrigger.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "ETriggerType.h"

AGuardNpcEnterCheckTrigger::AGuardNpcEnterCheckTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->m_TriggerType = ETriggerType::GUARD_NPC_ENTER_CHECK;
    this->m_pFriendNpcTrigger = NULL;
    this->m_pBoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComp"));
    this->m_pDelayInitActor = NULL;
    this->m_pBoxCollision->SetupAttachment(RootComponent);
}


