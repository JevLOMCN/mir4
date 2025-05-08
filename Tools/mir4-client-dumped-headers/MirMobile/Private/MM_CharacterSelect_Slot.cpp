#include "MM_CharacterSelect_Slot.h"

UMM_CharacterSelect_Slot::UMM_CharacterSelect_Slot() {
    this->Panel_SelectBG = NULL;
    this->Img_ClassSymbol = NULL;
    this->Txt_CharacterLevel = NULL;
    this->Txt_CharacterName = NULL;
    this->Txt_DeleteTime = NULL;
    this->Btn_SelectSlot = NULL;
    this->Panel_Info = NULL;
    this->Panel_Lock = NULL;
    this->Panel_Empty = NULL;
    this->Panel_Delete = NULL;
    this->m_Overlay_NFT = NULL;
    this->m_CharacterUID = 0;
    this->m_SlotIndex = 0;
    this->STRING_TIME_DAYS = 1003167;
    this->STRING_TIME_HOURS = 1003168;
    this->STRING_TIME_MINUTES = 1003169;
    this->Panel_ServerChange = NULL;
}

void UMM_CharacterSelect_Slot::OnClickCharacterSlot() {
}


