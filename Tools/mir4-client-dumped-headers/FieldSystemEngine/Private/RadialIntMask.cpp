#include "RadialIntMask.h"

URadialIntMask::URadialIntMask(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Radius = 0.00f;
    this->InteriorValue = 1;
    this->ExteriorValue = 0;
    this->SetMaskCondition = Field_Set_Always;
}

URadialIntMask* URadialIntMask::SetRadialIntMask(float NewRadius, FVector NewPosition, int32 NewInteriorValue, int32 NewExteriorValue, TEnumAsByte<ESetMaskConditionType> SetMaskConditionIn) {
    return NULL;
}


