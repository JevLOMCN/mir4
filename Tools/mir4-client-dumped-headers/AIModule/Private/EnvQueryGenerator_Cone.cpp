#include "EnvQueryGenerator_Cone.h"
#include "EnvQueryContext_Querier.h"

UEnvQueryGenerator_Cone::UEnvQueryGenerator_Cone() {
    this->CenterActor = UEnvQueryContext_Querier::StaticClass();
    this->bIncludeContextLocation = false;
}


