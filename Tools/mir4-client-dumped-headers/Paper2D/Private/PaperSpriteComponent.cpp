#include "PaperSpriteComponent.h"

UPaperSpriteComponent::UPaperSpriteComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseAsOccluder = false;
    this->CastShadow = false;
    this->SourceSprite = NULL;
    this->MaterialOverride = NULL;
}

void UPaperSpriteComponent::SetSpriteColor(FLinearColor NewColor) {
}

bool UPaperSpriteComponent::SetSprite(UPaperSprite* NewSprite) {
    return false;
}

UPaperSprite* UPaperSpriteComponent::GetSprite() {
    return NULL;
}


