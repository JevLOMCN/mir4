#include "SlateBlueprintLibrary.h"

USlateBlueprintLibrary::USlateBlueprintLibrary() {
}

FVector2D USlateBlueprintLibrary::TransformVectorLocalToAbsolute(const FGeometry& Geometry, FVector2D LocalVector) {
    return FVector2D{};
}

FVector2D USlateBlueprintLibrary::TransformVectorAbsoluteToLocal(const FGeometry& Geometry, FVector2D AbsoluteVector) {
    return FVector2D{};
}

float USlateBlueprintLibrary::TransformScalarLocalToAbsolute(const FGeometry& Geometry, float LocalScalar) {
    return 0.0f;
}

float USlateBlueprintLibrary::TransformScalarAbsoluteToLocal(const FGeometry& Geometry, float AbsoluteScalar) {
    return 0.0f;
}

void USlateBlueprintLibrary::ScreenToWidgetLocal(UObject* WorldContextObject, const FGeometry& Geometry, FVector2D ScreenPosition, FVector2D& LocalCoordinate) {
}

void USlateBlueprintLibrary::ScreenToWidgetAbsolute(UObject* WorldContextObject, FVector2D ScreenPosition, FVector2D& AbsoluteCoordinate) {
}

void USlateBlueprintLibrary::ScreenToViewport(UObject* WorldContextObject, FVector2D ScreenPosition, FVector2D& ViewportPosition) {
}

void USlateBlueprintLibrary::LocalToViewport(UObject* WorldContextObject, const FGeometry& Geometry, FVector2D LocalCoordinate, FVector2D& PixelPosition, FVector2D& ViewportPosition) {
}

FVector2D USlateBlueprintLibrary::LocalToAbsolute(const FGeometry& Geometry, FVector2D LocalCoordinate) {
    return FVector2D{};
}

bool USlateBlueprintLibrary::IsUnderLocation(const FGeometry& Geometry, const FVector2D& AbsoluteCoordinate) {
    return false;
}

FVector2D USlateBlueprintLibrary::GetLocalTopLeft(const FGeometry& Geometry) {
    return FVector2D{};
}

FVector2D USlateBlueprintLibrary::GetLocalSize(const FGeometry& Geometry) {
    return FVector2D{};
}

FVector2D USlateBlueprintLibrary::GetAbsoluteSize(const FGeometry& Geometry) {
    return FVector2D{};
}

bool USlateBlueprintLibrary::EqualEqual_SlateBrush(const FSlateBrush& A, const FSlateBrush& B) {
    return false;
}

void USlateBlueprintLibrary::AbsoluteToViewport(UObject* WorldContextObject, FVector2D AbsoluteDesktopCoordinate, FVector2D& PixelPosition, FVector2D& ViewportPosition) {
}

FVector2D USlateBlueprintLibrary::AbsoluteToLocal(const FGeometry& Geometry, FVector2D AbsoluteCoordinate) {
    return FVector2D{};
}


