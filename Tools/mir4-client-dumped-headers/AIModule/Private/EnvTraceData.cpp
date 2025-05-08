#include "EnvTraceData.h"

FEnvTraceData::FEnvTraceData() {
    this->VersionNum = 0;
    this->NavigationFilter = NULL;
    this->ProjectDown = 0.00f;
    this->ProjectUp = 0.00f;
    this->ExtentX = 0.00f;
    this->ExtentY = 0.00f;
    this->ExtentZ = 0.00f;
    this->PostProjectionVerticalOffset = 0.00f;
    this->TraceChannel = TraceTypeQuery1;
    this->SerializedChannel = ECC_WorldStatic;
    this->TraceShape = EEnvTraceShape::Line;
    this->TraceMode = EEnvQueryTrace::None;
    this->bTraceComplex = false;
    this->bOnlyBlockingHits = false;
    this->bCanTraceOnNavMesh = false;
    this->bCanTraceOnGeometry = false;
    this->bCanDisableTrace = false;
    this->bCanProjectDown = false;
}

