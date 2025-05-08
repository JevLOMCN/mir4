#include "CullingField.h"

UCullingField::UCullingField(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Culling = NULL;
    this->Field = NULL;
    this->Operation = Field_Culling_Inside;
}

UCullingField* UCullingField::SetCullingField(const UFieldNodeBase* NewCulling, const UFieldNodeBase* NewField, TEnumAsByte<EFieldCullingOperationType> NewOperation) {
    return NULL;
}


