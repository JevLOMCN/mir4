#include "NoiseField.h"

UNoiseField::UNoiseField(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MinRange = 0.00f;
    this->MaxRange = 1.00f;
}

UNoiseField* UNoiseField::SetNoiseField(float NewMinRange, float NewMaxRange, FTransform NewTransform) {
    return NULL;
}


