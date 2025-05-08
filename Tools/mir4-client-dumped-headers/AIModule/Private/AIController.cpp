#include "AIController.h"
#include "PathFollowingComponent.h"
#include "PawnActionsComponent.h"
#include "Templates/SubclassOf.h"

AAIController::AAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bStopAILogicOnUnposses = true;
    this->bLOSflag = false;
    this->bSkipExtraLOSChecks = true;
    this->bAllowStrafe = false;
    this->bWantsPlayerState = false;
    this->bSetControlRotationFromPawnOrientation = true;
    this->PathFollowingComponent = CreateDefaultSubobject<UPathFollowingComponent>(TEXT("PathFollowingComponent"));
    this->BrainComponent = NULL;
    this->PerceptionComponent = NULL;
    this->ActionsComp = CreateDefaultSubobject<UPawnActionsComponent>(TEXT("ActionsComp"));
    this->Blackboard = NULL;
    this->CachedGameplayTasksComponent = NULL;
    this->DefaultNavigationFilterClass = NULL;
}

bool AAIController::UseBlackboard(UBlackboardData* BlackboardAsset, UBlackboardComponent*& BlackboardComponent) {
    return false;
}

void AAIController::UnclaimTaskResource(TSubclassOf<UGameplayTaskResource> ResourceClass) {
}

void AAIController::SetPathFollowingComponent(UPathFollowingComponent* NewPFComponent) {
}

void AAIController::SetMoveBlockDetection(bool bEnable) {
}

bool AAIController::RunBehaviorTree(UBehaviorTree* BTAsset) {
    return false;
}


void AAIController::OnGameplayTaskResourcesClaimed(FGameplayResourceSet NewlyClaimed, FGameplayResourceSet FreshlyReleased) {
}

TEnumAsByte<EPathFollowingRequestResult::Type> AAIController::MoveToLocation(const FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, TSubclassOf<UNavigationQueryFilter> FilterClass, bool bAllowPartialPath) {
    return EPathFollowingRequestResult::Failed;
}

TEnumAsByte<EPathFollowingRequestResult::Type> AAIController::MoveToActor(AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, TSubclassOf<UNavigationQueryFilter> FilterClass, bool bAllowPartialPath) {
    return EPathFollowingRequestResult::Failed;
}

void AAIController::K2_SetFocus(AActor* NewFocus) {
}

void AAIController::K2_SetFocalPoint(FVector FP) {
}

void AAIController::K2_ClearFocus() {
}

bool AAIController::HasPartialPath() const {
    return false;
}

UPathFollowingComponent* AAIController::GetPathFollowingComponent() const {
    return NULL;
}

TEnumAsByte<EPathFollowingStatus::Type> AAIController::GetMoveStatus() const {
    return EPathFollowingStatus::Idle;
}

FVector AAIController::GetImmediateMoveDestination() const {
    return FVector{};
}

AActor* AAIController::GetFocusActor() const {
    return NULL;
}

FVector AAIController::GetFocalPointOnActor(const AActor* Actor) const {
    return FVector{};
}

FVector AAIController::GetFocalPoint() const {
    return FVector{};
}

UAIPerceptionComponent* AAIController::GetAIPerceptionComponent() {
    return NULL;
}

void AAIController::ClaimTaskResource(TSubclassOf<UGameplayTaskResource> ResourceClass) {
}


