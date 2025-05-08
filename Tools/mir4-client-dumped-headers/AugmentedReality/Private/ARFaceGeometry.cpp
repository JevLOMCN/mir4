#include "ARFaceGeometry.h"

UARFaceGeometry::UARFaceGeometry() {
    this->bIsTracked = false;
}

FTransform UARFaceGeometry::GetWorldSpaceEyeTransform(EAREye Eye) const {
    return FTransform{};
}

FTransform UARFaceGeometry::GetLocalSpaceEyeTransform(EAREye Eye) const {
    return FTransform{};
}

float UARFaceGeometry::GetBlendShapeValue(EARFaceBlendShape BlendShape) const {
    return 0.0f;
}

TMap<EARFaceBlendShape, float> UARFaceGeometry::GetBlendShapes() const {
    return TMap<EARFaceBlendShape, float>();
}


