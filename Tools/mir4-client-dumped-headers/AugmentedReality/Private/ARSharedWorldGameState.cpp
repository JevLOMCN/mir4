#include "ARSharedWorldGameState.h"

AARSharedWorldGameState::AARSharedWorldGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PreviewImageBytesTotal = 0;
    this->ARWorldBytesTotal = 0;
    this->PreviewImageBytesDelivered = 0;
    this->ARWorldBytesDelivered = 0;
}



