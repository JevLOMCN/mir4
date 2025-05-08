#include "PanelWidget.h"

UPanelWidget::UPanelWidget() {
}

bool UPanelWidget::RemoveChildAt(int32 Index) {
    return false;
}

bool UPanelWidget::RemoveChild(UWidget* Content) {
    return false;
}

bool UPanelWidget::HasChild(UWidget* Content) const {
    return false;
}

bool UPanelWidget::HasAnyChildren() const {
    return false;
}

int32 UPanelWidget::GetChildrenCount() const {
    return 0;
}

int32 UPanelWidget::GetChildIndex(const UWidget* Content) const {
    return 0;
}

UWidget* UPanelWidget::GetChildAt(int32 Index) const {
    return NULL;
}

TArray<UWidget*> UPanelWidget::GetAllChildren() const {
    return TArray<UWidget*>();
}

void UPanelWidget::ClearChildren() {
}

UPanelSlot* UPanelWidget::AddChild(UWidget* Content) {
    return NULL;
}


