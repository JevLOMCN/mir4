#include "NavSystemConfigOverride.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

ANavSystemConfigOverride::ANavSystemConfigOverride(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHidden = true;
    this->bNetLoadOnClient = false;
    this->bCanBeDamaged = false;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
    this->NavigationSystemConfig = NULL;
    this->OverridePolicy = ENavSystemOverridePolicy::Override;
    this->bLoadOnClient = false;
}


