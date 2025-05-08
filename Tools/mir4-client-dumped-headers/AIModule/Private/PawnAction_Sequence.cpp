#include "PawnAction_Sequence.h"

UPawnAction_Sequence::UPawnAction_Sequence() {
    this->ChildFailureHandlingMode = EPawnActionFailHandling::RequireSuccess;
    this->RecentActionCopy = NULL;
}


