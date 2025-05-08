#include "MM_DoorObject.h"

AMM_DoorObject::AMM_DoorObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_PosID = 0;
    this->m_InitState = 0;
    this->m_State0Time = 0;
    this->m_State1Time = 0;
    this->m_pEnableNavArea = NULL;
    this->m_pDisableNavArea = NULL;
    this->m_bLoadPolys = false;
}

void AMM_DoorObject::SetPolys_Test() {
}

void AMM_DoorObject::ON_Test() {
}

void AMM_DoorObject::OFF_Test() {
}

void AMM_DoorObject::ExportDoorData() {
}



