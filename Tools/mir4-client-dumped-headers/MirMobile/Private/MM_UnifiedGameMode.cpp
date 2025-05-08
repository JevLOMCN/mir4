#include "MM_UnifiedGameMode.h"
#include "MM_GameStateBase.h"
#include "MM_HUDBase.h"
#include "MM_PlayerController.h"
#include "MM_PlayerState.h"
#include "MM_SpectatorPawn.h"

AMM_UnifiedGameMode::AMM_UnifiedGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameStateClass = AMM_GameStateBase::StaticClass();
    this->PlayerControllerClass = AMM_PlayerController::StaticClass();
    this->PlayerStateClass = AMM_PlayerState::StaticClass();
    this->HUDClass = AMM_HUDBase::StaticClass();
    this->DefaultPawnClass = NULL;
    this->SpectatorClass = AMM_SpectatorPawn::StaticClass();
}


