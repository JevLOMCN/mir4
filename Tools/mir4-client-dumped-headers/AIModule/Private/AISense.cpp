#include "AISense.h"

UAISense::UAISense() {
    this->DefaultExpirationAge = 340282346638528859811704183484516925440.00f;
    this->NotifyType = EAISenseNotifyType::OnEveryPerception;
    this->bWantsNewPawnNotification = false;
    this->bAutoRegisterAllPawnsAsSources = false;
    this->PerceptionSystemInstance = NULL;
}


