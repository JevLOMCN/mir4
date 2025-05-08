#include "BTDecorator_SetTagCooldown.h"

UBTDecorator_SetTagCooldown::UBTDecorator_SetTagCooldown() {
    this->NodeName = TEXT("Set Tag Cooldown");
    this->CooldownDuration = 5.00f;
    this->bAddToExistingDuration = false;
}


