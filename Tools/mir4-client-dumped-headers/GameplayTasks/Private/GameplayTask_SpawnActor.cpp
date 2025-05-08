#include "GameplayTask_SpawnActor.h"
#include "Templates/SubclassOf.h"

UGameplayTask_SpawnActor::UGameplayTask_SpawnActor() {
    this->ClassToSpawn = NULL;
}

UGameplayTask_SpawnActor* UGameplayTask_SpawnActor::SpawnActor(TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, FVector SpawnLocation, FRotator SpawnRotation, TSubclassOf<AActor> Class, bool bSpawnOnlyOnAuthority) {
    return NULL;
}

void UGameplayTask_SpawnActor::FinishSpawningActor(UObject* WorldContextObject, AActor* SpawnedActor) {
}

bool UGameplayTask_SpawnActor::BeginSpawningActor(UObject* WorldContextObject, AActor*& SpawnedActor) {
    return false;
}


