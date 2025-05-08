#include "MaterialQualityOverrides.h"

FMaterialQualityOverrides::FMaterialQualityOverrides() {
    this->bDiscardQualityDuringCook = false;
    this->bEnableOverride = false;
    this->bForceFullyRough = false;
    this->bForceNonMetal = false;
    this->bForceDisableLMDirectionality = false;
    this->bForceLQReflections = false;
    this->bDisableMaterialNormalCalculation = false;
    this->MobileCSMQuality = EMobileCSMQuality::NoFiltering;
}

