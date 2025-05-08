#include "OnlineBeaconClient.h"

AOnlineBeaconClient::AOnlineBeaconClient(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bOnlyRelevantToOwner = true;
    this->NetDriverName = TEXT("BeaconDriverClient");
    this->BeaconOwner = NULL;
    this->BeaconConnection = NULL;
    this->ConnectionState = EBeaconConnectionState::Invalid;
}

void AOnlineBeaconClient::ClientOnConnected_Implementation() {
}


