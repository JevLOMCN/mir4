#include "OnlineBeaconHost.h"

AOnlineBeaconHost::AOnlineBeaconHost(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetDriverName = TEXT("BeaconDriverHost");
    this->ListenPort = 15000;
}


