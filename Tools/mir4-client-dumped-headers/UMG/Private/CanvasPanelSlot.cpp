#include "CanvasPanelSlot.h"

UCanvasPanelSlot::UCanvasPanelSlot() {
    this->bAutoSize = false;
    this->ZOrder = 0;
}

void UCanvasPanelSlot::SetZOrder(int32 InZOrder) {
}

void UCanvasPanelSlot::SetSize(FVector2D InSize) {
}

void UCanvasPanelSlot::SetPosition(FVector2D InPosition) {
}

void UCanvasPanelSlot::SetOffsets(FMargin InOffset) {
}

void UCanvasPanelSlot::SetMinimum(FVector2D InMinimumAnchors) {
}

void UCanvasPanelSlot::SetMaximum(FVector2D InMaximumAnchors) {
}

void UCanvasPanelSlot::SetLayout(const FAnchorData& InLayoutData) {
}

void UCanvasPanelSlot::SetAutoSize(bool InbAutoSize) {
}

void UCanvasPanelSlot::SetAnchors(FAnchors InAnchors) {
}

void UCanvasPanelSlot::SetAlignment(FVector2D InAlignment) {
}

int32 UCanvasPanelSlot::GetZOrder() const {
    return 0;
}

FVector2D UCanvasPanelSlot::GetSize() const {
    return FVector2D{};
}

FVector2D UCanvasPanelSlot::GetPosition() const {
    return FVector2D{};
}

FMargin UCanvasPanelSlot::GetOffsets() const {
    return FMargin{};
}

FAnchorData UCanvasPanelSlot::GetLayout() const {
    return FAnchorData{};
}

bool UCanvasPanelSlot::GetAutoSize() const {
    return false;
}

FAnchors UCanvasPanelSlot::GetAnchors() const {
    return FAnchors{};
}

FVector2D UCanvasPanelSlot::GetAlignment() const {
    return FVector2D{};
}


