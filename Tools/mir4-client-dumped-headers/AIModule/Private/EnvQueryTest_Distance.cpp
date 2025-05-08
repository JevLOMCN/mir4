#include "EnvQueryTest_Distance.h"
#include "EnvQueryContext_Querier.h"

UEnvQueryTest_Distance::UEnvQueryTest_Distance() {
    this->TestMode = EEnvTestDistance::Distance3D;
    this->DistanceTo = UEnvQueryContext_Querier::StaticClass();
}


