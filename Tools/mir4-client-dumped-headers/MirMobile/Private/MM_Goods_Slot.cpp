#include "MM_Goods_Slot.h"

UMM_Goods_Slot::UMM_Goods_Slot() {
    this->m_eCostType = ECostType::TYPE_NONE;
    this->m_eTimeTicketType = ETimeTicketType::TYPE_NONE;
    this->m_bUse_SimpleDigit = false;
    this->m_bUse_MaxValue = false;
    this->m_bUse_GuildMaxValue = false;
    this->m_bUse_CostName = false;
    this->m_bUse_AddButton = false;
    this->m_bLeftJustify_CostValue = false;
    this->m_iTooltipID = 0;
    this->m_Img_CostIcon = NULL;
    this->m_Txt_CostName = NULL;
    this->m_Txt_CostValue = NULL;
    this->m_Grid_AddIcon = NULL;
    this->m_Btn_Icon = NULL;
    this->m_Btn_Cost = NULL;
    this->m_Btn_CostInfo = NULL;
    this->m_SB_Tooltip = NULL;
    this->m_Btn_Tooltip = NULL;
    this->m_Can_IncreaseEffect = NULL;
    this->m_Ani_IncreaseEffect = NULL;
}

void UMM_Goods_Slot::OnClickMain() {
}

void UMM_Goods_Slot::OnClickCostSub() {
}

void UMM_Goods_Slot::OnClickCostInfo() {
}


