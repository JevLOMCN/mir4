#include "MM_SparringObject.h"

AMM_SparringObject::AMM_SparringObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_RingEffect = NULL;
    this->m_SparringRange = 3000;
    this->m_SparringWarningRange = 2500;
}


