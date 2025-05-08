#include "DebugLogPanel.h"

UDebugLogPanel::UDebugLogPanel() {
    this->FixedList = NULL;
    this->ScrollList = NULL;
}

void UDebugLogPanel::InsertLog(TEnumAsByte<EDEBUG::Type> eKEY, TEnumAsByte<ELOGTYPE::Type> eType, const FString& _title, const FString& _contents) {
}


