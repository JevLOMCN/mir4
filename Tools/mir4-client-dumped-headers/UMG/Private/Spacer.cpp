#include "Spacer.h"
#include "ESlateVisibility.h"

USpacer::USpacer() {
    this->bIsVariable = false;
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
}

void USpacer::SetSize(FVector2D InSize) {
}


