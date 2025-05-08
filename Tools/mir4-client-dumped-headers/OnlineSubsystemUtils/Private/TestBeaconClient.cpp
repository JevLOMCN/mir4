#include "TestBeaconClient.h"

ATestBeaconClient::ATestBeaconClient(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void ATestBeaconClient::ServerPong_Implementation() {
}
bool ATestBeaconClient::ServerPong_Validate() {
    return true;
}

void ATestBeaconClient::ClientPing_Implementation() {
}


