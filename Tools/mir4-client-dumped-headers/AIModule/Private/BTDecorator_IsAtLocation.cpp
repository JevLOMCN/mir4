#include "BTDecorator_IsAtLocation.h"

UBTDecorator_IsAtLocation::UBTDecorator_IsAtLocation() {
    this->NodeName = TEXT("Is At Location");
    this->AcceptableRadius = 50.00f;
    this->GeometricDistanceType = FAIDistanceType::Distance3D;
    this->bUseParametrizedRadius = false;
    this->bUseNavAgentGoalLocation = true;
    this->bPathFindingBasedTest = true;
}


