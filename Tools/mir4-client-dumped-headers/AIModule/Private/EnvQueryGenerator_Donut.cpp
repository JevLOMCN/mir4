#include "EnvQueryGenerator_Donut.h"
#include "EnvQueryContext_Querier.h"

UEnvQueryGenerator_Donut::UEnvQueryGenerator_Donut() {
    this->bUseSpiralPattern = false;
    this->Center = UEnvQueryContext_Querier::StaticClass();
    this->bDefineArc = false;
}


