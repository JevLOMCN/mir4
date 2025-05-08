#include "InvalidationBox.h"
#include "ESlateVisibility.h"

UInvalidationBox::UInvalidationBox() {
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
    this->bCanCache = true;
    this->CacheRelativeTransforms = false;
}

void UInvalidationBox::SetCanCache(bool CanCache) {
}

void UInvalidationBox::InvalidateCache() {
}

bool UInvalidationBox::GetCanCache() const {
    return false;
}


