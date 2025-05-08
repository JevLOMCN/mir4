#include "NavigationTestingActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent
#include "NavigationInvokerComponent.h"

ANavigationTestingActor::ANavigationTestingActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnlyActor = true;
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCylinder"));
    this->CapsuleComponent = (UCapsuleComponent*)RootComponent;
    this->InvokerComponent = CreateDefaultSubobject<UNavigationInvokerComponent>(TEXT("InvokerComponent"));
    this->bActAsNavigationInvoker = false;
    this->MyNavData = NULL;
    this->bProjectedLocationValid = false;
    this->bSearchStart = false;
    this->bBacktracking = false;
    this->bUseHierarchicalPathfinding = false;
    this->bGatherDetailedInfo = true;
    this->bDrawDistanceToWall = false;
    this->bShowNodePool = true;
    this->bShowBestPath = true;
    this->bShowDiffWithPreviousStep = false;
    this->bShouldBeVisibleInGame = false;
    this->CostDisplayMode = ENavCostDisplay::TotalCost;
    this->bPathExist = false;
    this->bPathIsPartial = false;
    this->bPathSearchOutOfNodes = false;
    this->PathfindingTime = 0.00f;
    this->PathCost = 0.00f;
    this->PathfindingSteps = 0;
    this->OtherActor = NULL;
    this->FilterClass = NULL;
    this->ShowStepIndex = -1;
    this->OffsetFromCornersDistance = 0.00f;
}


