#include "EnvQueryTest_Pathfinding.h"
#include "EnvQueryContext_Querier.h"

UEnvQueryTest_Pathfinding::UEnvQueryTest_Pathfinding() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->TestMode = EEnvTestPathfinding::PathExist;
    this->Context = UEnvQueryContext_Querier::StaticClass();
    this->FilterClass = NULL;
}


