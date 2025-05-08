#include "GridPanel.h"
#include "ESlateVisibility.h"

UGridPanel::UGridPanel() {
    this->bIsVariable = false;
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
}

void UGridPanel::SetRowFill(int32 ColumnIndex, float Coefficient) {
}

void UGridPanel::SetColumnFill(int32 ColumnIndex, float Coefficient) {
}

UGridSlot* UGridPanel::AddChildToGrid(UWidget* Content, int32 InRow, int32 InColumn) {
    return NULL;
}


