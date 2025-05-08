#include "MoveTrigger.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "ETriggerType.h"

AMoveTrigger::AMoveTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->m_TriggerType = ETriggerType::MOVE;
    this->Next = NULL;
    this->prev = NULL;
}


