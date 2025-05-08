#include "AbstractNavData.h"

AAbstractNavData::AAbstractNavData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeMainNavData = false;
    this->bCanSpawnOnRebuild = false;
}


