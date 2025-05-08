#include "MM_FSMComponent.h"

UMM_FSMComponent::UMM_FSMComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UMM_FSMComponent::OnHit_SimpleNetwork() {
}

void UMM_FSMComponent::OnHit(int64 AttackerUID, int32 AttackID, int32 Damage) {
}

void UMM_FSMComponent::OnEvent(EFSM_TYPE eventType, int32 EventValue) {
}

void UMM_FSMComponent::ChangeFSM(EFSM_TYPE FSMType, bool IsForce, int32 param01, int32 param02) {
}


