#include "DetourCrowdAIController.h"
#include "CrowdFollowingComponent.h"

ADetourCrowdAIController::ADetourCrowdAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UCrowdFollowingComponent>(TEXT("PathFollowingComponent"))) {
}


