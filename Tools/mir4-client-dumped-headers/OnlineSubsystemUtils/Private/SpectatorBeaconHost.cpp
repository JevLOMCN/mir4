#include "SpectatorBeaconHost.h"
#include "SpectatorBeaconClient.h"

ASpectatorBeaconHost::ASpectatorBeaconHost(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BeaconTypeName = TEXT("SpectatorBeaconClient");
    this->ClientBeaconActorClass = ASpectatorBeaconClient::StaticClass();
    this->State = NULL;
    this->bLogoutOnSessionTimeout = true;
    this->SessionTimeoutSecs = 10.00f;
    this->TravelSessionTimeoutSecs = 45.00f;
}


