#include "MM_B_Shop_NPC.h"

UMM_B_Shop_NPC::UMM_B_Shop_NPC() {
    this->m_Anim_Open = NULL;
    this->m_Anim_Close = NULL;
    this->m_BtnClose = NULL;
    this->m_Goods = NULL;
    this->m_TitleText = NULL;
    this->m_ScrollBox = NULL;
    this->m_GuildScrollBox = NULL;
    this->btn_reset = NULL;
    this->txt_time_value = NULL;
    this->txt_time = NULL;
    this->gp_normal = NULL;
    this->gp_black_iron = NULL;
    this->guild_icon = NULL;
    this->txt_guild_name = NULL;
    this->txt_remain_count = NULL;
    this->txt_remain_time = NULL;
    this->shop_npc_goods = NULL;
    this->m_CanvasEventGoods = NULL;
    this->m_Img_CostIcon = NULL;
    this->btn_cost = NULL;
    this->m_Txt_CostValue = NULL;
    this->m_pBtnCommToolTip = NULL;
    this->DEFULT_TOOLTIP_MSG_ID = 123;
    this->SEPTARIA_TOOLTIP_MSG_ID = 155;
}

void UMM_B_Shop_NPC::OnClickedReset() {
}

void UMM_B_Shop_NPC::OnClickCost() {
}


