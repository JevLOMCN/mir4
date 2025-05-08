#include "MM_BattlePass_Menu_Btn.h"

UMM_BattlePass_Menu_Btn::UMM_BattlePass_Menu_Btn() {
    this->MENU_BTN_TYPE = EBattlePassMenu::eMenu_Reward;
    this->STRING_ID_MENU_BTN = 0;
    this->m_Img_Selected = NULL;
    this->m_Img_Locked = NULL;
    this->m_Txt_TabName = NULL;
    this->m_Img_Indicator = NULL;
    this->m_Btn_Main = NULL;
}

void UMM_BattlePass_Menu_Btn::OnClickMain() {
}


