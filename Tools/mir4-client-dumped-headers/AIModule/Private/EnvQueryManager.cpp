#include "EnvQueryManager.h"
#include "Templates/SubclassOf.h"

UEnvQueryManager::UEnvQueryManager() {
    this->MaxAllowedTestingTime = 0.01f;
    this->bTestQueriesUsingBreadth = true;
    this->QueryCountWarningThreshold = 0;
    this->QueryCountWarningInterval = 30.00f;
}

UEnvQueryInstanceBlueprintWrapper* UEnvQueryManager::RunEQSQuery(UObject* WorldContextObject, UEnvQuery* QueryTemplate, UObject* Querier, TEnumAsByte<EEnvQueryRunMode::Type> RunMode, TSubclassOf<UEnvQueryInstanceBlueprintWrapper> WrapperClass) {
    return NULL;
}


