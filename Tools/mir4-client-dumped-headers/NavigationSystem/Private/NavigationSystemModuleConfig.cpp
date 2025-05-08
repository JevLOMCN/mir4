#include "NavigationSystemModuleConfig.h"

UNavigationSystemModuleConfig::UNavigationSystemModuleConfig() {
    this->bStrictlyStatic = false;
    this->bCreateOnClient = false;
    this->bAutoSpawnMissingNavData = false;
    this->bSpawnNavDataInNavBoundsLevel = false;
}


