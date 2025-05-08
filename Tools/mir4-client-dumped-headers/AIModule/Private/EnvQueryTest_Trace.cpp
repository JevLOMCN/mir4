#include "EnvQueryTest_Trace.h"
#include "EnvQueryContext_Querier.h"

UEnvQueryTest_Trace::UEnvQueryTest_Trace() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->Context = UEnvQueryContext_Querier::StaticClass();
}


