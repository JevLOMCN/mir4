#include "MM_UIAction_MakeItem.h"

UMM_UIAction_MakeItem::UMM_UIAction_MakeItem() {
    this->Time_NextMessage_MakeItem = 0.00f;
    this->NOTHING_TO_MAKE_ITEM_LIST = 1026010;
    this->MAX_MATERIAL_NUM = 4;
    this->MAX_MAKE_COUNT = 999;
    this->ButtonMakeMsgID = 1026001;
    this->NotEnoughCost = 1026006;
    this->NotEnoughMaterial = 1026007;
    this->STRING_MSG_NOTENOUGH_LEVEL = 1026009;
    this->STRING_MSG_NOTMAKE_NOTENOUGH_PREITEM = 1026034;
    this->STRING_MSG_NOTMAKE_NOTENOUGH_LEVEL = 1026035;
    this->SLOT_EFFECT_INDEX = 1100000;
    this->SPECIAL_MAKE_EQUIP_MATERIAL_COUNT = 0;
    this->STRING_MSG_WARRING_MATERIALITEM = 1026046;
    this->STRING_MSG_WARRING_EQUIPITEM = 1026048;
    this->STRING_MSG_WARRING_LOCK_MATERIALITEM = 1800014;
    this->STRING_MSG_INVENTORYFULL = 1026051;
    this->STRING_MSG_WARRING_SUCCESS_WARRNING = 1026055;
    this->STRING_MSG_WARRING_SUCCESS_EQUIPITEM = 1026058;
    this->DisplayUpdateTime = 1.00f;
    this->UpdateTimer = 0.00f;
    this->ANIEND_TIME_FAIL = 0;
    this->ANIEND_TIME_SUCCESS = 0;
    this->ANIEND_TIME_GREATESUCCESS = 0;
    this->m_MakeTID = 0;
    this->m_MakeCount = 0;
    this->m_MainTabIndex = 0;
    this->m_SubTabIndex = 0;
    this->m_NPCGroupListID = 0;
    this->m_MakeItemUID = 0;
    this->m_SelectedMakeTID = 0;
    this->m_IsNPCMake = false;
    this->Reserve_RouteItemTID = 0;
    this->Reserve_RouteItemParam = false;
    this->Reserve_History = false;
    this->m_ItemMake_OpenCheck = false;
    this->IsMaterialChanging = false;
    this->m_ReserveNpcID = 0;
    this->m_ReserveNpcID_Backup = 0;
    this->m_SelectItemTID_NPC = 0;
    this->m_TargetItemTID_NPC = 0;
}

void UMM_UIAction_MakeItem::StartMakeItemTransfer() {
}

void UMM_UIAction_MakeItem::StartMakeItemEquip() {
}

void UMM_UIAction_MakeItem::Received_ItemMakeAgencyInfo() {
}

void UMM_UIAction_MakeItem::ClearOpenCheck() {
}


