#include "OnlineBeaconHostObject.h"

AOnlineBeaconHostObject::AOnlineBeaconHostObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BeaconTypeName = TEXT("UNDEFINED");
    this->ClientBeaconActorClass = NULL;
}


