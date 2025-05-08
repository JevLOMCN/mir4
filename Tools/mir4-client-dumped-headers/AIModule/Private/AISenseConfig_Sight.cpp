#include "AISenseConfig_Sight.h"
#include "AISense_Sight.h"

UAISenseConfig_Sight::UAISenseConfig_Sight() {
    this->Implementation = UAISense_Sight::StaticClass();
    this->SightRadius = 3000.00f;
    this->LoseSightRadius = 3500.00f;
    this->PeripheralVisionAngleDegrees = 90.00f;
    this->AutoSuccessRangeFromLastSeenLocation = -1.00f;
}


