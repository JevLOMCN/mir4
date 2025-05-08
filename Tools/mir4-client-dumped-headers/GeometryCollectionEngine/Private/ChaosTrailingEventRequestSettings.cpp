#include "ChaosTrailingEventRequestSettings.h"

FChaosTrailingEventRequestSettings::FChaosTrailingEventRequestSettings() {
    this->MaxNumberOfResults = 0;
    this->MinMass = 0.00f;
    this->MinSpeed = 0.00f;
    this->MinAngularSpeed = 0.00f;
    this->MaxDistance = 0.00f;
    this->SortMethod = EChaosTrailingSortMethod::SortNone;
}

