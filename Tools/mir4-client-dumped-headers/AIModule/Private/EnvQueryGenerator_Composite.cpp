#include "EnvQueryGenerator_Composite.h"
#include "EnvQueryItemType_Point.h"

UEnvQueryGenerator_Composite::UEnvQueryGenerator_Composite() {
    this->ItemType = UEnvQueryItemType_Point::StaticClass();
    this->bAllowDifferentItemTypes = false;
    this->bHasMatchingItemType = true;
    this->ForcedItemType = NULL;
}


