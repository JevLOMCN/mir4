#include "MM_AbilityState_Item.h"

UMM_AbilityState_Item::UMM_AbilityState_Item() {
    this->IsShowOptionPassive = false;
    this->IsModifiedStats = false;
    this->Panel_NewOption = NULL;
    this->Panel_LevelUp = NULL;
    this->Panel_MaxLevel = NULL;
    this->Txt_Title = NULL;
    this->Txt_BeforeValue = NULL;
    this->Txt_AfterValue = NULL;
    this->ComparePointWidget = NULL;
    this->Img_Deco_Arrow = NULL;
    this->Img_Option_Grade = NULL;
    this->Img_Option_Icon = NULL;
    this->Btn_Main = NULL;
    this->m_OptionIndex = 0;
    this->m_IsRandomOption = false;
    this->m_IsEqupipped = false;
}

void UMM_AbilityState_Item::OnClickMain() {
}


