#include "GameplayTasksComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UGameplayTasksComponent::UGameplayTasksComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->bIsNetDirty = false;
}

void UGameplayTasksComponent::OnRep_SimulatedTasks() {
}

EGameplayTaskRunResult UGameplayTasksComponent::K2_RunGameplayTask(TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, UGameplayTask* Task, uint8 Priority, TArray<TSubclassOf<UGameplayTaskResource>> AdditionalRequiredResources, TArray<TSubclassOf<UGameplayTaskResource>> AdditionalClaimedResources) {
    return EGameplayTaskRunResult::Error;
}

void UGameplayTasksComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGameplayTasksComponent, SimulatedTasks);
}


