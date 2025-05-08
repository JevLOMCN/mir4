#include "BoxFalloff.h"

UBoxFalloff::UBoxFalloff(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Magnitude = 1.00f;
    this->MinRange = 0.00f;
    this->MaxRange = 1.00f;
    this->Default = 0.00f;
    this->Falloff = Field_Falloff_Linear;
}

UBoxFalloff* UBoxFalloff::SetBoxFalloff(float NewMagnitude, float NewMinRange, float NewMaxRange, float NewDefault, FTransform NewTransform, TEnumAsByte<EFieldFalloffType> NewFalloff) {
    return NULL;
}


