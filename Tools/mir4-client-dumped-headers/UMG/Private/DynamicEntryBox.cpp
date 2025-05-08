#include "DynamicEntryBox.h"
#include "Templates/SubclassOf.h"

UDynamicEntryBox::UDynamicEntryBox() {
    this->EntryWidgetClass = NULL;
}

void UDynamicEntryBox::Reset(bool bDeleteWidgets) {
}

void UDynamicEntryBox::RemoveEntry(UUserWidget* EntryWidget) {
}

UUserWidget* UDynamicEntryBox::BP_CreateEntryOfClass(TSubclassOf<UUserWidget> EntryClass) {
    return NULL;
}

UUserWidget* UDynamicEntryBox::BP_CreateEntry() {
    return NULL;
}


