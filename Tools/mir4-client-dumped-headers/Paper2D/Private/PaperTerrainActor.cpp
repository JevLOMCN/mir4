#include "PaperTerrainActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "PaperTerrainComponent.h"
#include "PaperTerrainSplineComponent.h"

APaperTerrainActor::APaperTerrainActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->DummyRoot = (USceneComponent*)RootComponent;
    this->SplineComponent = CreateDefaultSubobject<UPaperTerrainSplineComponent>(TEXT("SplineComponent"));
    this->RenderComponent = CreateDefaultSubobject<UPaperTerrainComponent>(TEXT("RenderComponent"));
    this->SplineComponent->SetupAttachment(RootComponent);
    this->RenderComponent->SetupAttachment(RootComponent);
}


