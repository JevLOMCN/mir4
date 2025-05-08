#include "PolygonButton.h"

UPolygonButton::UPolygonButton() {
    this->TouchMethod = EButtonTouchMethod::PreciseTap;
    this->PressMethod = EButtonPressMethod::ButtonPress;
}

void UPolygonButton::SetPolygonVertices(const TArray<FVector2D>& VertexList) {
}

TArray<FVector2D> UPolygonButton::GetPolygonVertices() {
    return TArray<FVector2D>();
}


