#include "EnvQueryGenerator_CurrentLocation.h"
#include "EnvQueryContext_Querier.h"
#include "EnvQueryItemType_Point.h"

UEnvQueryGenerator_CurrentLocation::UEnvQueryGenerator_CurrentLocation() {
    this->ItemType = UEnvQueryItemType_Point::StaticClass();
    this->QueryContext = UEnvQueryContext_Querier::StaticClass();
}


