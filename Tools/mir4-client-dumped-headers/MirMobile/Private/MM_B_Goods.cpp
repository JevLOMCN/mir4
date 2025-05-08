#include "MM_B_Goods.h"

UMM_B_Goods::UMM_B_Goods() {
    this->m_CanScreen = NULL;
    this->m_Btn_Return = NULL;
    this->m_arGoodsTab[0] = NULL;
    this->m_arGoodsTab[1] = NULL;
    this->m_arGoodsTab[2] = NULL;
    this->m_arGoodsSlot[0] = NULL;
    this->m_arGoodsSlot[1] = NULL;
    this->m_arGoodsSlot[2] = NULL;
    this->m_Goods_Detail = NULL;
    this->m_CB_Close = NULL;
    this->m_CB_ToggleDetail = NULL;
    this->m_Btn_Screen = NULL;
    this->m_Spc_ContentsSpace = NULL;
    this->m_pBtnGuide = NULL;
    this->m_pHydraSlot = NULL;
}

void UMM_B_Goods::OnClickToggleDetail() {
}

void UMM_B_Goods::OnClickReturn() {
}

void UMM_B_Goods::OnClickCostSubBtn(int32 iCostMain, int32 iCostSub) {
}

void UMM_B_Goods::OnClickClose() {
}


