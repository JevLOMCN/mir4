#include "AISense_Sight.h"
#include "EAISenseNotifyType.h"

UAISense_Sight::UAISense_Sight() {
    this->NotifyType = EAISenseNotifyType::OnPerceptionChange;
    this->bAutoRegisterAllPawnsAsSources = true;
    this->MaxTracesPerTick = 6;
    this->MinQueriesPerTimeSliceCheck = 40;
    this->MaxTimeSlicePerTick = 0.01f;
    this->HighImportanceQueryDistanceThreshold = 300.00f;
    this->MaxQueryImportance = 60.00f;
    this->SightLimitQueryImportance = 10.00f;
}


