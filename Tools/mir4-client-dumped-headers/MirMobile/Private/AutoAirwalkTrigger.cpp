#include "AutoAirwalkTrigger.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent

AAutoAirwalkTrigger::AAutoAirwalkTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCylinder"));
    this->m_QuestID = 0;
    this->m_AutoMoveDirectingID = 0;
    this->m_pCapsuleComponent = (UCapsuleComponent*)RootComponent;
    this->m_JumpDistance1 = 0.00f;
    this->m_JumpHeight1 = 0.00f;
    this->m_JumpDistance2 = 0.00f;
    this->m_JumpHeight2 = 0.00f;
    this->m_JumpDistance3 = 0.00f;
    this->m_JumpHeight3 = 0.00f;
    this->m_EndDistance = 0.00f;
    this->m_EndHeight = 0.00f;
}


void AAutoAirwalkTrigger::PlayAutoMove() {
}


