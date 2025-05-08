#include "ListView.h"

UListView::UListView() {
    this->Orientation = Orient_Vertical;
    this->SelectionMode = ESelectionMode::Single;
    this->ConsumeMouseWheel = EConsumeMouseWheel::WhenScrollingPossible;
    this->bClearSelectionOnClick = false;
    this->bIsFocusable = true;
    this->EntrySpacing = 0.00f;
    this->bReturnFocusToSelection = false;
}

void UListView::SetSelectionMode(TEnumAsByte<ESelectionMode::Type> NewSelectionMode) {
}

void UListView::SetSelectedIndex(int32 Index) {
}

void UListView::ScrollIndexIntoView(int32 Index) {
}

void UListView::RemoveItem(UObject* Item) {
}

void UListView::NavigateToIndex(int32 Index) {
}

bool UListView::IsRefreshPending() const {
    return false;
}

int32 UListView::GetNumItems() const {
    return 0;
}

TArray<UObject*> UListView::GetListItems() const {
    return TArray<UObject*>();
}

UObject* UListView::GetItemAt(int32 Index) const {
    return NULL;
}

int32 UListView::GetIndexForItem(UObject* Item) const {
    return 0;
}

void UListView::ClearListItems() {
}

void UListView::BP_SetSelectedItem(UObject* Item) {
}

void UListView::BP_SetListItems(const TArray<UObject*>& InListItems) {
}

void UListView::BP_SetItemSelection(UObject* Item, bool bSelected) {
}

void UListView::BP_ScrollItemIntoView(UObject* Item) {
}

void UListView::BP_NavigateToItem(UObject* Item) {
}

bool UListView::BP_IsItemVisible(UObject* Item) const {
    return false;
}

bool UListView::BP_GetSelectedItems(TArray<UObject*>& Items) const {
    return false;
}

UObject* UListView::BP_GetSelectedItem() const {
    return NULL;
}

int32 UListView::BP_GetNumItemsSelected() const {
    return 0;
}

void UListView::BP_ClearSelection() {
}

void UListView::BP_CancelScrollIntoView() {
}

void UListView::AddItem(UObject* Item) {
}


