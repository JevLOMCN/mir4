#include "BTDecorator_TagCooldown.h"

UBTDecorator_TagCooldown::UBTDecorator_TagCooldown() {
    this->NodeName = TEXT("Tag Cooldown");
    this->CooldownDuration = 5.00f;
    this->bAddToExistingDuration = false;
    this->bActivatesCooldown = true;
}


