#include "AISenseConfig_Hearing.h"
#include "AISense_Hearing.h"

UAISenseConfig_Hearing::UAISenseConfig_Hearing() {
    this->Implementation = UAISense_Hearing::StaticClass();
    this->HearingRange = 3000.00f;
    this->LoSHearingRange = 0.00f;
    this->bUseLoSHearing = false;
}


