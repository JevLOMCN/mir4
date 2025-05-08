#include "MM_HudLeftTabMenuSlot.h"

UMM_HudLeftTabMenuSlot::UMM_HudLeftTabMenuSlot() {
    this->SymbolIconID = 730060;
    this->SymbolGuildIconID = 730108;
    this->eMenuSlotType = ELeftTabMenuSlotType::OpenInfo;
    this->m_iEffectID_Touched = 0;
    this->m_pImgSelected = NULL;
    this->m_pBtnTab = NULL;
    this->m_Img_IcnMake = NULL;
    this->m_pGridEffect = NULL;
    this->m_Img_Symbol_Select = NULL;
    this->m_Grid_Indicator = NULL;
    this->m_Img_Indicator = NULL;
    this->m_Txt_Indicator = NULL;
    this->m_Txt_PartyMemberCount = NULL;
    this->m_Effect_FullParty = NULL;
}

void UMM_HudLeftTabMenuSlot::OnClickTabSlot() {
}


