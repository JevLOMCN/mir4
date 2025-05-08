#include "MM_Item_Make_Slider.h"

UMM_Item_Make_Slider::UMM_Item_Make_Slider() {
    this->m_pTxt_CurValueNum = NULL;
    this->m_pBtn_DecreaseValue = NULL;
    this->m_pBtn_IncreaseValue = NULL;
    this->m_pBtn_MaxValue = NULL;
    this->m_pBtn_MinValue = NULL;
    this->m_pBtn_IncreaseUnit = NULL;
    this->m_pBtn_KeyPad = NULL;
    this->m_pImgCostIcon = NULL;
    this->m_iMinValue = 0;
    this->m_iMaxValue = 0;
    this->m_iCurValue = 0;
    this->m_iStackValue = 0;
    this->m_iIncreaseUnit = 0;
    this->m_iCurrentMaxValue = 0;
    this->m_iSellValue = 0;
    this->m_Lock = false;
}

void UMM_Item_Make_Slider::SetCurValueReturn(int64 Value) {
}

void UMM_Item_Make_Slider::OnClickedMinValueBtn() {
}

void UMM_Item_Make_Slider::OnClickedMaxValueBtn() {
}

void UMM_Item_Make_Slider::OnClickedKeyPad() {
}

void UMM_Item_Make_Slider::OnClickedIncreaseUnit() {
}

void UMM_Item_Make_Slider::OnClickedIncrease() {
}

void UMM_Item_Make_Slider::OnClickedDecrease() {
}


