#include "MM_Map_Waypoint_List_Slot.h"

UMM_Map_Waypoint_List_Slot::UMM_Map_Waypoint_List_Slot() {
    this->m_iIcon_NormalWaypoint = 910018;
    this->m_iIcon_UnableWaypoint = 910019;
    this->IconAbleFixedNPC = 910034;
    this->IconAble_NPC_Shop = 910011;
    this->IconAble_NPC_ItemMake = 910035;
    this->IconAble_NPC_Exchange = 910036;
    this->IconAble_NPC_BeautySalon = 0;
    this->IconAbleEventNPC = 910011;
    this->IconAbleInventoryNPC = 910095;
    this->IconAble_Relation = 910032;
    this->IconAbleNamed = 910037;
    this->IconUnableNamed = 910038;
    this->IconAbleBoss = 910030;
    this->IconUnableBoss = 910031;
    this->IconAbleFieldBoss = 910020;
    this->IconUnableFieldBoss = 910021;
    this->IconAbleWorldBoss = 910069;
    this->IconUnableWorldBoss = 910070;
    this->IconAbleEliteModeType = 910037;
    this->IconUnableEliteModeType = 910038;
    this->IconAbleMining = 910024;
    this->IconUnableMining = 910025;
    this->IconAbleGather = 910028;
    this->IconUnableGather = 910029;
    this->IconAbleBMining = 910072;
    this->IconUnableBMining = 910073;
    this->IconAbleZinki = 910092;
    this->IconUnableZinki = 910093;
    this->IconAbleMonsterSpawn = 910077;
    this->IconUnableMonsterSpawn = 910078;
    this->IconAbleSanctum = 910096;
    this->IconUnableSanctum = 910104;
    this->IconMonolith = 910074;
    this->IconAbleDarkAltar = 910102;
    this->IconUnableDarkAltar = 910105;
    this->IconAbleDascoMeltingNPC = 910097;
    this->IconAbleWarGate = 910098;
    this->IconAbleWarBoss = 910099;
    this->IconAbleWarTrap = 910100;
    this->IconAbleWarShop = 910101;
    this->m_Img_Icon = NULL;
    this->m_RTxt_Name = NULL;
    this->m_Txt_Explored = NULL;
    this->m_Img_Selected = NULL;
    this->m_Grid_Disabled = NULL;
    this->m_Btn_Main = NULL;
}

void UMM_Map_Waypoint_List_Slot::OnClickMain() {
}


