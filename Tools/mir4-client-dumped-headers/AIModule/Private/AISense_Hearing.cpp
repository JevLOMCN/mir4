#include "AISense_Hearing.h"

UAISense_Hearing::UAISense_Hearing() {
    this->SpeedOfSoundSq = 0.00f;
}

void UAISense_Hearing::ReportNoiseEvent(UObject* WorldContextObject, FVector NoiseLocation, float Loudness, AActor* Instigator, float MaxRange, FName Tag) {
}


