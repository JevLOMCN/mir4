#include "SpectatorBeaconClient.h"

ASpectatorBeaconClient::ASpectatorBeaconClient(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RequestType = ESpectatorClientRequestType::NonePending;
    this->bPendingReservationSent = false;
    this->bCancelReservation = false;
}

void ASpectatorBeaconClient::ServerReservationRequest_Implementation(const FString& SessionId, const FSpectatorReservation& Reservation) {
}
bool ASpectatorBeaconClient::ServerReservationRequest_Validate(const FString& SessionId, const FSpectatorReservation& Reservation) {
    return true;
}

void ASpectatorBeaconClient::ServerCancelReservationRequest_Implementation(const FUniqueNetIdRepl& Spectator) {
}
bool ASpectatorBeaconClient::ServerCancelReservationRequest_Validate(const FUniqueNetIdRepl& Spectator) {
    return true;
}

void ASpectatorBeaconClient::ClientSendReservationUpdates_Implementation(int32 NumRemainingReservations) {
}

void ASpectatorBeaconClient::ClientSendReservationFull_Implementation() {
}

void ASpectatorBeaconClient::ClientReservationResponse_Implementation(TEnumAsByte<ESpectatorReservationResult::Type> ReservationResponse) {
}

void ASpectatorBeaconClient::ClientCancelReservationResponse_Implementation(TEnumAsByte<ESpectatorReservationResult::Type> ReservationResponse) {
}


