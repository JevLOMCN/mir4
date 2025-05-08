#include "AnimNode_SequenceEvaluator.h"

FAnimNode_SequenceEvaluator::FAnimNode_SequenceEvaluator() {
    this->Sequence = NULL;
    this->ExplicitTime = 0.00f;
    this->bShouldLoop = false;
    this->bTeleportToExplicitTime = false;
    this->ReinitializationBehavior = ESequenceEvalReinit::NoReset;
    this->StartPosition = 0.00f;
}

