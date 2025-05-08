#include "BTTask_SetTagCooldown.h"

UBTTask_SetTagCooldown::UBTTask_SetTagCooldown() {
    this->NodeName = TEXT("Set Tag Cooldown");
    this->bAddToExistingDuration = false;
    this->CooldownDuration = 5.00f;
}


