#include "OperatorField.h"

UOperatorField::UOperatorField(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Magnitude = 1.00f;
    this->RightField = NULL;
    this->LeftField = NULL;
    this->Operation = Field_Multiply;
}

UOperatorField* UOperatorField::SetOperatorField(float NewMagnitude, const UFieldNodeBase* NewRightField, const UFieldNodeBase* NewLeftField, TEnumAsByte<EFieldOperationType> NewOperation) {
    return NULL;
}


