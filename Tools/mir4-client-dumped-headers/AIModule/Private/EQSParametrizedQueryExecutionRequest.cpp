#include "EQSParametrizedQueryExecutionRequest.h"

FEQSParametrizedQueryExecutionRequest::FEQSParametrizedQueryExecutionRequest() {
    this->QueryTemplate = NULL;
    this->RunMode = EEnvQueryRunMode::SingleResult;
    this->bUseBBKeyForQueryTemplate = false;
}

