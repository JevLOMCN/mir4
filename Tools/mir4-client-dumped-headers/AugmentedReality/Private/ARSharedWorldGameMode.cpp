#include "ARSharedWorldGameMode.h"
#include "ARSharedWorldGameState.h"
#include "ARSharedWorldPlayerController.h"

AARSharedWorldGameMode::AARSharedWorldGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameStateClass = AARSharedWorldGameState::StaticClass();
    this->PlayerControllerClass = AARSharedWorldPlayerController::StaticClass();
    this->BufferSizePerChunk = 512;
}

void AARSharedWorldGameMode::SetPreviewImageData(TArray<uint8> ImageData) {
}

void AARSharedWorldGameMode::SetARWorldSharingIsReady() {
}

void AARSharedWorldGameMode::SetARSharedWorldData(TArray<uint8> ARWorldData) {
}

AARSharedWorldGameState* AARSharedWorldGameMode::GetARSharedWorldGameState() {
    return NULL;
}


