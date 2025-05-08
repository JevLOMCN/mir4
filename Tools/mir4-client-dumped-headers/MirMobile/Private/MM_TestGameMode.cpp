#include "MM_TestGameMode.h"
#include "MM_PlayerController.h"
#include "MM_PlayerState.h"
#include "MM_SpectatorPawn.h"
#include "MM_TestGameHUD.h"
#include "MM_TestGameState.h"

AMM_TestGameMode::AMM_TestGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameStateClass = AMM_TestGameState::StaticClass();
    this->PlayerControllerClass = AMM_PlayerController::StaticClass();
    this->PlayerStateClass = AMM_PlayerState::StaticClass();
    this->HUDClass = AMM_TestGameHUD::StaticClass();
    this->DefaultPawnClass = NULL;
    this->SpectatorClass = AMM_SpectatorPawn::StaticClass();
}


