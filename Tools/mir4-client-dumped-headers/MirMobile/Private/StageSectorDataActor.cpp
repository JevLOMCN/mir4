#include "StageSectorDataActor.h"

AStageSectorDataActor::AStageSectorDataActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_SectorID = 0;
    this->m_Range = 0;
    this->m_Segments = 300;
    this->m_Tickness = 100.00f;
    this->m_EditScaleRatio = 300.00f;
}

void AStageSectorDataActor::SaveJSON() {
}

void AStageSectorDataActor::LoadJSON() {
}


