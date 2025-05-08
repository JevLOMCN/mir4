#include "MM_B_Unsealing.h"

UMM_B_Unsealing::UMM_B_Unsealing() {
    this->EFFECT_RECOMMEND_MAKE_ITEM = 1020307;
    this->m_TotalMenuTID = 0;
    this->Ani_Open = NULL;
    this->Ani_Close = NULL;
    this->inventory_unsealing = NULL;
    this->unsealing = NULL;
    this->Btn_Test = NULL;
    this->Grid_Effect = NULL;
    this->Img_Effect = NULL;
    this->m_Can_Btn_Inventory = NULL;
    this->ReqeustResult = 0;
}

float UMM_B_Unsealing::PlayCloseAni() {
    return 0.0f;
}


