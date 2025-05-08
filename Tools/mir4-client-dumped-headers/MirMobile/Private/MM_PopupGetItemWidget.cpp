#include "MM_PopupGetItemWidget.h"

UMM_PopupGetItemWidget::UMM_PopupGetItemWidget() {
    this->TitleStrID = 1038001;
    this->Event_ScreenStrID = 1038016;
    this->TreasureGobllin_ScreenStrID = 1038016;
    this->Scr_CategoryList = NULL;
    this->btn_close = NULL;
    this->Btn_BG = NULL;
    this->Txt_Title = NULL;
    this->Category_Depth1 = NULL;
    this->DetailList = NULL;
    this->FirstChoice = false;
    this->bAsyncLoaded = false;
    this->MakeSlotCount = 0;
    this->FirstSelectType_ItemWayType = 0;
    this->FirstSelectType_MoneyWayType = 0;
}

void UMM_PopupGetItemWidget::OnClickTypeSlot_Item(int32 Type) {
}

void UMM_PopupGetItemWidget::OnClickTypeSlot_Cost(int32 CostType) {
}

void UMM_PopupGetItemWidget::OnClickDetailClose() {
}

void UMM_PopupGetItemWidget::OnClickClose() {
}

void UMM_PopupGetItemWidget::OnClickCategorySlot_Cost(int32 Type, int32 SubType, const FString& StrCategory) {
}

void UMM_PopupGetItemWidget::OnClickCategorySlot(int32 Type, int32 SubType, const FString& StrCategory) {
}

void UMM_PopupGetItemWidget::OnClickBG() {
}


