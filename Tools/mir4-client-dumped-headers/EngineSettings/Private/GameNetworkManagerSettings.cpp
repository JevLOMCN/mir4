#include "GameNetworkManagerSettings.h"

UGameNetworkManagerSettings::UGameNetworkManagerSettings() {
    this->MinDynamicBandwidth = 0;
    this->MaxDynamicBandwidth = 0;
    this->TotalNetBandwidth = 0;
    this->BadPingThreshold = 0;
    this->bIsStandbyCheckingEnabled = false;
    this->StandbyRxCheatTime = 0.00f;
    this->StandbyTxCheatTime = 0.00f;
    this->PercentMissingForRxStandby = 0.00f;
    this->PercentMissingForTxStandby = 0.00f;
    this->PercentForBadPing = 0.00f;
    this->JoinInProgressStandbyWaitTime = 0.00f;
}


