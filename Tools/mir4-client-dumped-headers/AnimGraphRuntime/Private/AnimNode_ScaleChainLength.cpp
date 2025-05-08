#include "AnimNode_ScaleChainLength.h"

FAnimNode_ScaleChainLength::FAnimNode_ScaleChainLength() {
    this->DefaultChainLength = 0.00f;
    this->Alpha = 0.00f;
    this->ChainInitialLength = EScaleChainInitialLength::FixedDefaultLengthValue;
}

