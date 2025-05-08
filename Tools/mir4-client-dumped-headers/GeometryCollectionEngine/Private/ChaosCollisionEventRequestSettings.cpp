#include "ChaosCollisionEventRequestSettings.h"

FChaosCollisionEventRequestSettings::FChaosCollisionEventRequestSettings() {
    this->MaxNumberResults = 0;
    this->MinMass = 0.00f;
    this->MinSpeed = 0.00f;
    this->MinImpulse = 0.00f;
    this->MaxDistance = 0.00f;
    this->SortMethod = EChaosCollisionSortMethod::SortNone;
}

