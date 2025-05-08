#include "PaperFlipbookActor.h"
#include "PaperFlipbookComponent.h"

APaperFlipbookActor::APaperFlipbookActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("RenderComponent"));
    this->RenderComponent = (UPaperFlipbookComponent*)RootComponent;
}


