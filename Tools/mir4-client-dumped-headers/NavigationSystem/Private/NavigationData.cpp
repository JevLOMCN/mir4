#include "NavigationData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

ANavigationData::ANavigationData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->bCanBeDamaged = false;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
    this->RenderingComp = NULL;
    this->bEnableDrawing = false;
    this->bForceRebuildOnLoad = false;
    this->bAutoDestroyWhenNoNavigation = true;
    this->bCanBeMainNavData = true;
    this->bCanSpawnOnRebuild = true;
    this->bRebuildAtRuntime = false;
    this->RuntimeGeneration = ERuntimeGenerationType::Static;
    this->ObservedPathsTickInterval = 0.50f;
    this->DataVersion = 13;
}


