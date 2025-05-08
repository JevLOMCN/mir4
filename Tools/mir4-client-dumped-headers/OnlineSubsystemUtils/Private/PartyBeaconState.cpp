#include "PartyBeaconState.h"

UPartyBeaconState::UPartyBeaconState() {
    this->NumConsumedReservations = 0;
    this->MaxReservations = 0;
    this->NumTeams = 0;
    this->NumPlayersPerTeam = 0;
    this->TeamAssignmentMethod = TEXT("Smallest");
    this->ReservedHostTeamNum = 0;
    this->ForceTeamNum = 0;
    this->bRestrictCrossConsole = false;
    this->bEnableRemovalRequests = false;
}


