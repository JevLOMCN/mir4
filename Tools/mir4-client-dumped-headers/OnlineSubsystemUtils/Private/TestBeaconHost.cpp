#include "TestBeaconHost.h"
#include "TestBeaconClient.h"

ATestBeaconHost::ATestBeaconHost(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BeaconTypeName = TEXT("TestBeaconClient");
    this->ClientBeaconActorClass = ATestBeaconClient::StaticClass();
}


