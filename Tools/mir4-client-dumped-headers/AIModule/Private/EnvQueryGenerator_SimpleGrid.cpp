#include "EnvQueryGenerator_SimpleGrid.h"
#include "EnvQueryContext_Querier.h"

UEnvQueryGenerator_SimpleGrid::UEnvQueryGenerator_SimpleGrid() {
    this->GenerateAround = UEnvQueryContext_Querier::StaticClass();
}


