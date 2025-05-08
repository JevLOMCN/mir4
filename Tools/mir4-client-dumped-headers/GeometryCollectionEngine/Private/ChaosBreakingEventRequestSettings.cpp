#include "ChaosBreakingEventRequestSettings.h"

FChaosBreakingEventRequestSettings::FChaosBreakingEventRequestSettings() {
    this->MaxNumberOfResults = 0;
    this->MinRadius = 0.00f;
    this->MinSpeed = 0.00f;
    this->MinMass = 0.00f;
    this->MaxDistance = 0.00f;
    this->SortMethod = EChaosBreakingSortMethod::SortNone;
}

