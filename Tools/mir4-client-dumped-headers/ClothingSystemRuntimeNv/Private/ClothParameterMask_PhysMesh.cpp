#include "ClothParameterMask_PhysMesh.h"

FClothParameterMask_PhysMesh::FClothParameterMask_PhysMesh() {
    this->CurrentTarget = MaskTarget_PhysMesh::None;
    this->MaxValue = 0.00f;
    this->MinValue = 0.00f;
    this->bEnabled = false;
}

