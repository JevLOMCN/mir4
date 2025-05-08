#include "MM_PopUp_GameOption.h"

UMM_PopUp_GameOption::UMM_PopUp_GameOption() {
    this->Panel_Goods = NULL;
    this->MainTabSet = NULL;
    this->WidgetSwitcher = NULL;
    this->GameOption_Account = NULL;
    this->GameOption_InGame = NULL;
    this->GameOption_Environment = NULL;
    this->GameOption_PC = NULL;
    this->Btn_Return = NULL;
    this->btn_close = NULL;
}

void UMM_PopUp_GameOption::OnLinkIDPComplete(bool Success, const FString& Message) {
}

void UMM_PopUp_GameOption::OnClickReturn() {
}

void UMM_PopUp_GameOption::OnClickMainTab(int32 tabIndex, bool bLocked) {
}

void UMM_PopUp_GameOption::OnClickClose() {
}


