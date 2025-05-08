#include "MM_Costume_Slot_InvenItem_Long.h"

UMM_Costume_Slot_InvenItem_Long::UMM_Costume_Slot_InvenItem_Long() {
    this->m_pSelectSlotEffect = NULL;
    this->m_pTutorialWidget = NULL;
    this->Grid_SaleIcon = NULL;
    this->Panel_SaleInfo = NULL;
    this->Txt_Percent = NULL;
    this->Txt_Name = NULL;
    this->CostGrid = NULL;
    this->Img_CostType = NULL;
    this->Txt_CostValue = NULL;
    this->Img_CostType_Sale = NULL;
    this->Txt_CostValue_Sale = NULL;
    this->Panel_Color = NULL;
    this->Txt_Color = NULL;
    this->Slot_PaletteColor = NULL;
    this->Img_Select = NULL;
    this->Btn_Slot = NULL;
    this->Img_Icon = NULL;
    this->Img_Event = NULL;
    this->Img_Equipped = NULL;
    this->Img_Have = NULL;
    this->Img_Default = NULL;
    this->Img_Disabled = NULL;
    this->Img_Lock = NULL;
    this->txt_time = NULL;
    this->Img_TimeBG = NULL;
    this->Img_Indicator = NULL;
    this->m_Effect_Panel = NULL;
    this->SLOT_EFFECT_INDEX = 1100001;
    this->STRING_PERCENT = 1027107;
    this->STRING_PurchaseAble = 1027106;
    this->ICONID_DEFAULT = 1526;
    this->ICONID_EQUIP = 1527;
    this->ICONID_OWNED = 1522;
    this->m_CostumeParts = COSTUME_PARTS::PARTS_NONE;
    this->m_CostumeId = 0;
    this->m_SlotIndex = 0;
}

void UMM_Costume_Slot_InvenItem_Long::OnClickSlot() {
}


