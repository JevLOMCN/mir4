#include "MirLevelSequenceActor.h"

AMirLevelSequenceActor::AMirLevelSequenceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_pLevelSequencePlayer = NULL;
    this->m_pLevelSequenceActor = NULL;
}

void AMirLevelSequenceActor::OnFinishedSequence() {
}


