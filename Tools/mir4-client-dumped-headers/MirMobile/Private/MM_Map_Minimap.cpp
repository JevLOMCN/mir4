#include "MM_Map_Minimap.h"

UMM_Map_Minimap::UMM_Map_Minimap() {
    this->m_MapDetail = NULL;
    this->m_CTHrzTabSet = NULL;
    this->m_MapWaypointList = NULL;
    this->m_MapOccupation = NULL;
    this->m_Grid_DropItem = NULL;
    this->m_ListView_DropItemList = NULL;
    this->m_CheckBox_SectorGrade = NULL;
    this->m_pBtnCommToolTip = NULL;
    this->m_Hrz_Sanctum = NULL;
    this->m_Txt_Sanctum = NULL;
    this->m_iFontSize = 18;
    this->m_iMiddleFontSize = 16;
    this->m_iSmallFontSize = 15;
    this->m_iBidoFontSize = 13;
    this->m_iEliteFontSize = 12;
}

void UMM_Map_Minimap::OnClickTab(int32 iTabIndex, bool bLocked) {
}

void UMM_Map_Minimap::OnClickCheckbox_SectorGrade(bool bChecked) {
}


