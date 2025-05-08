#include "CrowdAvoidanceConfig.h"

FCrowdAvoidanceConfig::FCrowdAvoidanceConfig() {
    this->VelocityBias = 0.00f;
    this->DesiredVelocityWeight = 0.00f;
    this->CurrentVelocityWeight = 0.00f;
    this->SideBiasWeight = 0.00f;
    this->ImpactTimeWeight = 0.00f;
    this->ImpactTimeRange = 0.00f;
    this->CustomPatternIdx = 0;
    this->AdaptiveDivisions = 0;
    this->AdaptiveRings = 0;
    this->AdaptiveDepth = 0;
}

