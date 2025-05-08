#include "PaperSpriteActor.h"
#include "PaperSpriteComponent.h"

APaperSpriteActor::APaperSpriteActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("RenderComponent"));
    this->RenderComponent = (UPaperSpriteComponent*)RootComponent;
}


