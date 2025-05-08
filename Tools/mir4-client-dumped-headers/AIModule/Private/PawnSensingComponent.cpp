#include "PawnSensingComponent.h"

UPawnSensingComponent::UPawnSensingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HearingThreshold = 1400.00f;
    this->LOSHearingThreshold = 2800.00f;
    this->SightRadius = 5000.00f;
    this->SensingInterval = 0.50f;
    this->HearingMaxSoundAge = 1.00f;
    this->bEnableSensingUpdates = true;
    this->bOnlySensePlayers = true;
    this->bSeePawns = true;
    this->bHearNoises = true;
    this->PeripheralVisionAngle = 90.00f;
    this->PeripheralVisionCosine = 0.00f;
}

void UPawnSensingComponent::SetSensingUpdatesEnabled(const bool bEnabled) {
}

void UPawnSensingComponent::SetSensingInterval(const float NewSensingInterval) {
}

void UPawnSensingComponent::SetPeripheralVisionAngle(const float NewPeripheralVisionAngle) {
}

float UPawnSensingComponent::GetPeripheralVisionCosine() const {
    return 0.0f;
}

float UPawnSensingComponent::GetPeripheralVisionAngle() const {
    return 0.0f;
}


