#include "MM_PKMode.h"

UMM_PKMode::UMM_PKMode() {
    this->m_pAnim_Start = NULL;
    this->m_pAnim_End = NULL;
    this->ListElementClass = NULL;
    this->m_ScrollBoxList = NULL;
    this->m_TestValue = 4;
    this->ScrollBox_Offset = 100;
    this->SkipTimer_ScrollBox = 0.50f;
    this->m_TextTitle = NULL;
    this->m_TextBlock_TendGrade = NULL;
    this->m_TextBlock_TendValue = NULL;
    this->m_TextPKExplain_0 = NULL;
    this->m_TextPKExplain_1 = NULL;
    this->m_CheckBox_OnlyUserTarget = NULL;
    this->m_TextBlock_OnlyUserTargetNotice = NULL;
    this->m_Btn_PKRecord = NULL;
    this->Btn_Background = NULL;
    this->btn_close = NULL;
    this->Btn_Tooltip_Mode = NULL;
    this->Btn_Tooltip_ModeChange = NULL;
    this->m_VBox_0 = NULL;
    this->m_VBox_1 = NULL;
    this->m_VBox_2 = NULL;
    this->m_VBox_3 = NULL;
    this->m_pRefWidget = NULL;
    this->m_ScrollDots = NULL;
    this->ScrollBox_Offset_Old = 0;
    this->EventSkip = false;
    this->Can_AllyListBtn = NULL;
    this->Btn_AllyList = NULL;
}

void UMM_PKMode::OnSelectedMode(EPKModeType selectedMode) {
}

void UMM_PKMode::OnScrollEvent(float fOffset) {
}

void UMM_PKMode::OnCloseAnimation() {
}

void UMM_PKMode::OnClickPKRecordBtn() {
}

void UMM_PKMode::OnClickMain_Status(int32 StatusId, UMM_Option_Ability* pRefWidget) {
}

void UMM_PKMode::OnClickClose() {
}

void UMM_PKMode::OnClickAllyListButton() {
}

void UMM_PKMode::OnCheckStateChangedOnlyUserTarget(bool IsChecked) {
}


