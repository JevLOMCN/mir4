#include "NavigationFilterArea.h"

FNavigationFilterArea::FNavigationFilterArea() {
    this->AreaClass = NULL;
    this->TravelCostOverride = 0.00f;
    this->EnteringCostOverride = 0.00f;
    this->bIsExcluded = false;
    this->bOverrideTravelCost = false;
    this->bOverrideEnteringCost = false;
}

