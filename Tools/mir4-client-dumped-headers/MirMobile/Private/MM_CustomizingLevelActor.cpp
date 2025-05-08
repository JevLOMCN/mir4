#include "MM_CustomizingLevelActor.h"

AMM_CustomizingLevelActor::AMM_CustomizingLevelActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_pPlanarReflectionComp = NULL;
    this->m_pCamera = NULL;
    this->m_pCustomizingTargetPoint = NULL;
    this->m_CurrentActor = NULL;
    this->m_ClassID = 0;
}


