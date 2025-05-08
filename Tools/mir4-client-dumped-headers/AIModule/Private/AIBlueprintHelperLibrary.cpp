#include "AIBlueprintHelperLibrary.h"
#include "Templates/SubclassOf.h"

UAIBlueprintHelperLibrary::UAIBlueprintHelperLibrary() {
}

void UAIBlueprintHelperLibrary::UnlockAIResourcesWithAnimation(UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic) {
}

APawn* UAIBlueprintHelperLibrary::SpawnAIFromClass(UObject* WorldContextObject, TSubclassOf<APawn> PawnClass, UBehaviorTree* BehaviorTree, FVector Location, FRotator Rotation, bool bNoCollisionFail) {
    return NULL;
}

void UAIBlueprintHelperLibrary::SimpleMoveToLocation(AController* Controller, const FVector& Goal, TSubclassOf<UNavigationQueryFilter> QueryFilterClass) {
}

void UAIBlueprintHelperLibrary::SimpleMoveToActor(AController* Controller, const AActor* Goal, TSubclassOf<UNavigationQueryFilter> QueryFilterClass) {
}

void UAIBlueprintHelperLibrary::SendAIMessage(APawn* Target, FName Message, UObject* MessageSource, bool bSuccess) {
}

void UAIBlueprintHelperLibrary::LockAIResourcesWithAnimation(UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic) {
}

bool UAIBlueprintHelperLibrary::IsValidAIRotation(FRotator Rotation) {
    return false;
}

bool UAIBlueprintHelperLibrary::IsValidAILocation(FVector Location) {
    return false;
}

bool UAIBlueprintHelperLibrary::IsValidAIDirection(FVector DirectionVector) {
    return false;
}

UNavigationPath* UAIBlueprintHelperLibrary::GetCurrentPath(AController* Controller) {
    return NULL;
}

UBlackboardComponent* UAIBlueprintHelperLibrary::GetBlackboard(AActor* Target) {
    return NULL;
}

AAIController* UAIBlueprintHelperLibrary::GetAIController(AActor* ControlledActor) {
    return NULL;
}

UAIAsyncTaskBlueprintProxy* UAIBlueprintHelperLibrary::CreateMoveToProxyObject(UObject* WorldContextObject, APawn* Pawn, FVector Destination, AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap) {
    return NULL;
}


