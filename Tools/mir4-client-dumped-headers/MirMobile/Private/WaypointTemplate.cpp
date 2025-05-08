#include "WaypointTemplate.h"

FWaypointTemplate::FWaypointTemplate() {
    this->ActiveRadius = 0;
    this->DefaultState = false;
    this->WaypointWarpNeedCostId = ECostType::TYPE_NONE;
    this->WaypointWarpNeedCostCount = 0;
    this->WaypointWarpNeedItemId = 0;
    this->WaypointWarpNeedItemCount = 0;
    this->WayPointName = 0;
}

