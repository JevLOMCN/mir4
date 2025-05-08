#include "BTService_BlueprintBase.h"

UBTService_BlueprintBase::UBTService_BlueprintBase() {
    this->AIOwner = NULL;
    this->ActorOwner = NULL;
    this->bShowPropertyDetails = true;
    this->bShowEventDetails = false;
}









bool UBTService_BlueprintBase::IsServiceActive() const {
    return false;
}


