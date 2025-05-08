#include "MM_Occupation_Minimap.h"

UMM_Occupation_Minimap::UMM_Occupation_Minimap() {
    this->MinimapFeatureAvailability = EMinimapFeatureAvailability::DEFAULT;
    this->m_Player = NULL;
    this->m_pPlayerSlot = NULL;
    this->Img_Minimap = NULL;
    this->Panel_Icon = NULL;
    this->Btn_TouchBound = NULL;
    this->m_SelectRevivalIcon = NULL;
    this->m_CharacterDieIcon = NULL;
    this->m_TouchIndex = 0;
    this->m_StageID = 0;
    this->m_SelectCorpsNumber = 0;
    this->m_GuildWarType = 0;
    this->m_SelectGuildUID = 0;
    this->m_DeltaTime = 0.00f;
    this->m_Grid_Move = NULL;
    this->m_Btn_Move = NULL;
    this->m_TxtMove = NULL;
}

void UMM_Occupation_Minimap::OnClickMove() {
}


