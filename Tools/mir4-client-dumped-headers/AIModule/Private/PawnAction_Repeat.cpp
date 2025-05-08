#include "PawnAction_Repeat.h"

UPawnAction_Repeat::UPawnAction_Repeat() {
    this->ActionToRepeat = NULL;
    this->RecentActionCopy = NULL;
    this->ChildFailureHandlingMode = EPawnActionFailHandling::IgnoreFailure;
}


