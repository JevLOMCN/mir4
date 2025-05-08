#include "PaperTileMapActor.h"
#include "PaperTileMapComponent.h"

APaperTileMapActor::APaperTileMapActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UPaperTileMapComponent>(TEXT("RenderComponent"));
    this->RenderComponent = (UPaperTileMapComponent*)RootComponent;
}


