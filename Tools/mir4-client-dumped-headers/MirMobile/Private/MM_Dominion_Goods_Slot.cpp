#include "MM_Dominion_Goods_Slot.h"

UMM_Dominion_Goods_Slot::UMM_Dominion_Goods_Slot() {
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
}


