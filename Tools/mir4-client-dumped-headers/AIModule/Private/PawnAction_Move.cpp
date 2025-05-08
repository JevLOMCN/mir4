#include "PawnAction_Move.h"

UPawnAction_Move::UPawnAction_Move() {
    this->bShouldPauseMovement = true;
    this->bAlwaysNotifyOnFinished = true;
    this->GoalActor = NULL;
    this->AcceptableRadius = 30.00f;
    this->FilterClass = NULL;
    this->bAllowStrafe = false;
    this->bFinishOnOverlap = true;
    this->bUsePathfinding = true;
    this->bAllowPartialPath = true;
    this->bProjectGoalToNavigation = false;
    this->bUpdatePathToGoal = true;
    this->bAbortChildActionOnPathChange = false;
}


