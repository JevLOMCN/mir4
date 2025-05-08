#include "MM_Costume_Slot_EquipInfo.h"

UMM_Costume_Slot_EquipInfo::UMM_Costume_Slot_EquipInfo() {
    this->CostumeParts = COSTUME_PARTS::PARTS_NONE;
    this->DefaultIconId = 0;
    this->img_bg = NULL;
    this->Img_Icon = NULL;
    this->Img_SelectList = NULL;
    this->Img_Open_Eyes = NULL;
    this->Img_Close_Eyes = NULL;
    this->Btn_CostumeVisibility = NULL;
    this->Btn_SelectSlot = NULL;
    this->ColorSlot = NULL;
    this->Panel_EffectSlot = NULL;
    this->Grid_Toggle = NULL;
    this->TargetUser = false;
}

void UMM_Costume_Slot_EquipInfo::OnToggleVisibility() {
}

void UMM_Costume_Slot_EquipInfo::OnSelectCostumeSlot() {
}


