#include "NavLinkProxy.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavLinkCustomComponent -FallbackName=NavLinkCustomComponent

ANavLinkProxy::ANavLinkProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHidden = true;
    this->bCanBeDamaged = false;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("PositionComponent"));
    this->PointLinks.AddDefaulted(1);
    this->SmartLinkComp = CreateDefaultSubobject<UNavLinkCustomComponent>(TEXT("SmartLinkComp"));
    this->bSmartLinkIsRelevant = false;
}

void ANavLinkProxy::SetSmartLinkEnabled(bool bEnabled) {
}

void ANavLinkProxy::ResumePathFollowing(AActor* Agent) {
}


bool ANavLinkProxy::IsSmartLinkEnabled() const {
    return false;
}

bool ANavLinkProxy::HasMovingAgents() const {
    return false;
}


