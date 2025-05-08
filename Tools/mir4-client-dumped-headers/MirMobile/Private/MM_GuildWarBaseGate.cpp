#include "MM_GuildWarBaseGate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

AMM_GuildWarBaseGate::AMM_GuildWarBaseGate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("GateBoxCollision"));
    this->m_FactionType = EGateFactionType::None;
    this->BaseGateCollision = (UBoxComponent*)RootComponent;
}


