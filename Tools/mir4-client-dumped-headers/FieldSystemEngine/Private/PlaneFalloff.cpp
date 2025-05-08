#include "PlaneFalloff.h"

UPlaneFalloff::UPlaneFalloff(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Magnitude = 1.00f;
    this->MinRange = 0.00f;
    this->MaxRange = 1.00f;
    this->Default = 0.00f;
    this->Distance = 0.00f;
    this->Falloff = Field_Falloff_Linear;
}

UPlaneFalloff* UPlaneFalloff::SetPlaneFalloff(float NewMagnitude, float NewMinRange, float NewMaxRange, float NewDefault, float NewDistance, FVector NewPosition, FVector NewNormal, TEnumAsByte<EFieldFalloffType> NewFalloff) {
    return NULL;
}


