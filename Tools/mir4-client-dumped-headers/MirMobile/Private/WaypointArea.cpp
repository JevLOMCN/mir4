#include "WaypointArea.h"

AWaypointArea::AWaypointArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_UniqueID = 0;
    this->m_ActiveRadius = 500;
    this->m_bDefaultState = true;
    this->m_WaypointWarpNeedCostId = ECostType::TYPE_NONE;
    this->m_WaypointWarpNeedCostCount = 0;
    this->m_WaypointWarpNeedItemId = 0;
    this->m_WaypointWarpNeedItemCount = 0;
    this->m_WaypointType = EWaypointType::DEFAULT;
    this->m_WaypointSubType = EWaypointSubType::NONE;
    this->m_bEnableSubType = false;
    this->m_WaypointNameID = 0;
    this->m_InfoValue = 0;
    this->m_NonListInfoValue = 0;
    this->m_bNavInside = true;
}


