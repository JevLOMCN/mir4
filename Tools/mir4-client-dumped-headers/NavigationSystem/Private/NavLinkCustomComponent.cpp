#include "NavLinkCustomComponent.h"
#include "NavArea_Default.h"
#include "NavArea_Null.h"

UNavLinkCustomComponent::UNavLinkCustomComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NavLinkUserId = 0;
    this->EnabledAreaClass = UNavArea_Default::StaticClass();
    this->DisabledAreaClass = UNavArea_Null::StaticClass();
    this->LinkDirection = ENavLinkDirection::BothWays;
    this->bLinkEnabled = true;
    this->bNotifyWhenEnabled = false;
    this->bNotifyWhenDisabled = false;
    this->bCreateBoxObstacle = false;
    this->ObstacleAreaClass = UNavArea_Null::StaticClass();
    this->BroadcastRadius = 0.00f;
    this->BroadcastInterval = 0.00f;
    this->BroadcastChannel = ECC_Pawn;
}


