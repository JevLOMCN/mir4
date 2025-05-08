#include "SafeZone.h"
#include "ESlateVisibility.h"

USafeZone::USafeZone() {
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
    this->PadLeft = true;
    this->PadRight = true;
    this->PadTop = true;
    this->PadBottom = true;
}

void USafeZone::SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom) {
}


