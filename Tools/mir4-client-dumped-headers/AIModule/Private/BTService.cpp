#include "BTService.h"

UBTService::UBTService() {
    this->Interval = 0.50f;
    this->RandomDeviation = 0.10f;
    this->bCallTickOnSearchStart = false;
    this->bRestartTimerOnEachActivation = false;
}


