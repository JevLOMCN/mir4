#include "MenuAnchor.h"

UMenuAnchor::UMenuAnchor() {
    this->MenuClass = NULL;
    this->Placement = MenuPlacement_ComboBox;
    this->bFitInWindow = true;
    this->ShouldDeferPaintingAfterWindowContent = true;
    this->UseApplicationMenuStack = true;
}

void UMenuAnchor::ToggleOpen(bool bFocusOnOpen) {
}

bool UMenuAnchor::ShouldOpenDueToClick() const {
    return false;
}

void UMenuAnchor::SetPlacement(TEnumAsByte<EMenuPlacement> InPlacement) {
}

void UMenuAnchor::Open(bool bFocusMenu) {
}

bool UMenuAnchor::IsOpen() const {
    return false;
}

bool UMenuAnchor::HasOpenSubMenus() const {
    return false;
}

FVector2D UMenuAnchor::GetMenuPosition() const {
    return FVector2D{};
}

void UMenuAnchor::FitInWindow(bool bFit) {
}

void UMenuAnchor::Close() {
}


