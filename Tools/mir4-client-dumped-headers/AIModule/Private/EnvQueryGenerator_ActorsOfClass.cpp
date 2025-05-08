#include "EnvQueryGenerator_ActorsOfClass.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EnvQueryContext_Querier.h"
#include "EnvQueryItemType_Actor.h"

UEnvQueryGenerator_ActorsOfClass::UEnvQueryGenerator_ActorsOfClass() {
    this->ItemType = UEnvQueryItemType_Actor::StaticClass();
    this->SearchedActorClass = AActor::StaticClass();
    this->SearchCenter = UEnvQueryContext_Querier::StaticClass();
}


