#include "PartyBeaconClient.h"

APartyBeaconClient::APartyBeaconClient(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RequestType = EClientRequestType::NonePending;
    this->bPendingReservationSent = false;
    this->bCancelReservation = false;
}

void APartyBeaconClient::ServerUpdateReservationRequest_Implementation(const FString& SessionId, const FPartyReservation& ReservationUpdate) {
}
bool APartyBeaconClient::ServerUpdateReservationRequest_Validate(const FString& SessionId, const FPartyReservation& ReservationUpdate) {
    return true;
}

void APartyBeaconClient::ServerReservationRequest_Implementation(const FString& SessionId, const FPartyReservation& Reservation) {
}
bool APartyBeaconClient::ServerReservationRequest_Validate(const FString& SessionId, const FPartyReservation& Reservation) {
    return true;
}

void APartyBeaconClient::ServerRemoveMemberFromReservationRequest_Implementation(const FString& SessionId, const FPartyReservation& ReservationUpdate) {
}
bool APartyBeaconClient::ServerRemoveMemberFromReservationRequest_Validate(const FString& SessionId, const FPartyReservation& ReservationUpdate) {
    return true;
}

void APartyBeaconClient::ServerCancelReservationRequest_Implementation(const FUniqueNetIdRepl& PartyLeader) {
}
bool APartyBeaconClient::ServerCancelReservationRequest_Validate(const FUniqueNetIdRepl& PartyLeader) {
    return true;
}

void APartyBeaconClient::ClientSendReservationUpdates_Implementation(int32 NumRemainingReservations) {
}

void APartyBeaconClient::ClientSendReservationFull_Implementation() {
}

void APartyBeaconClient::ClientReservationResponse_Implementation(TEnumAsByte<EPartyReservationResult::Type> ReservationResponse) {
}

void APartyBeaconClient::ClientCancelReservationResponse_Implementation(TEnumAsByte<EPartyReservationResult::Type> ReservationResponse) {
}


