#include "ConsoleSettings.h"

UConsoleSettings::UConsoleSettings() {
    this->MaxScrollbackSize = 1024;
    this->ManualAutoCompleteList.AddDefaulted(172);
    this->AutoCompleteMapPaths.AddDefaulted(1);
    this->BackgroundOpacityPercentage = 85.00f;
    this->bOrderTopToBottom = false;
    this->bDisplayHelpInAutoComplete = true;
}


