#include "BTTask_RunEQSQuery.h"

UBTTask_RunEQSQuery::UBTTask_RunEQSQuery() {
    this->NodeName = TEXT("Run EQS Query");
    this->QueryTemplate = NULL;
    this->RunMode = EEnvQueryRunMode::SingleResult;
    this->bUseBBKey = false;
}


