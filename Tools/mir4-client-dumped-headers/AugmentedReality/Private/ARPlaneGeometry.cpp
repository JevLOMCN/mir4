#include "ARPlaneGeometry.h"

UARPlaneGeometry::UARPlaneGeometry() {
    this->Orientation = EARPlaneOrientation::Horizontal;
    this->SubsumedBy = NULL;
}

UARPlaneGeometry* UARPlaneGeometry::GetSubsumedBy() const {
    return NULL;
}

EARPlaneOrientation UARPlaneGeometry::GetOrientation() const {
    return EARPlaneOrientation::Horizontal;
}

FVector UARPlaneGeometry::GetExtent() const {
    return FVector{};
}

FVector UARPlaneGeometry::GetCenter() const {
    return FVector{};
}

TArray<FVector> UARPlaneGeometry::GetBoundaryPolygonInLocalSpace() const {
    return TArray<FVector>();
}


