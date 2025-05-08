#include "AGProgressDialogData.h"

FAGProgressDialogData::FAGProgressDialogData() {
    this->Theme = LightTheme;
    this->MaxValue = 0;
    this->Progress = 0;
    this->IsIndeterminate = false;
    this->IsCancellable = false;
    this->Style = Spinner;
}

