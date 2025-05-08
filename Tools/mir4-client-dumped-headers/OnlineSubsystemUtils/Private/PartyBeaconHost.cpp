#include "PartyBeaconHost.h"
#include "PartyBeaconClient.h"

APartyBeaconHost::APartyBeaconHost(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BeaconTypeName = TEXT("PartyBeaconClient");
    this->ClientBeaconActorClass = APartyBeaconClient::StaticClass();
    this->State = NULL;
    this->bLogoutOnSessionTimeout = true;
    this->SessionTimeoutSecs = 10.00f;
    this->TravelSessionTimeoutSecs = 45.00f;
}


