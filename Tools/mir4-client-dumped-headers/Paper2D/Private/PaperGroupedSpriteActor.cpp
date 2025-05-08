#include "PaperGroupedSpriteActor.h"
#include "PaperGroupedSpriteComponent.h"

APaperGroupedSpriteActor::APaperGroupedSpriteActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UPaperGroupedSpriteComponent>(TEXT("RenderComponent"));
    this->RenderComponent = (UPaperGroupedSpriteComponent*)RootComponent;
}


