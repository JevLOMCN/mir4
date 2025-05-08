#include "RandomPlayerSequenceEntry.h"

FRandomPlayerSequenceEntry::FRandomPlayerSequenceEntry() {
    this->Sequence = NULL;
    this->ChanceToPlay = 0.00f;
    this->MinLoopCount = 0;
    this->MaxLoopCount = 0;
    this->MinPlayRate = 0.00f;
    this->MaxPlayRate = 0.00f;
}

