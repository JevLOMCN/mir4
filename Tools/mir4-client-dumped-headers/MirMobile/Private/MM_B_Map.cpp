#include "MM_B_Map.h"

UMM_B_Map::UMM_B_Map() {
    this->m_HrzMenu[0] = NULL;
    this->m_HrzMenu[1] = NULL;
    this->m_HrzMenu[2] = NULL;
    this->m_Menu[0] = NULL;
    this->m_Menu[1] = NULL;
    this->m_Menu[2] = NULL;
    this->m_CBClose = NULL;
    this->m_Minimap = NULL;
    this->m_Worldmap = NULL;
    this->m_ImgBg = NULL;
    this->m_Canvas_AreaMove = NULL;
    this->m_Btn_AreaPrev = NULL;
    this->m_Btn_AreaNext = NULL;
    this->m_Canvas_ServerChange = NULL;
    this->m_Btn_ServerChange = NULL;
    this->m_Canvas_ConquerServer_Img = NULL;
}

void UMM_B_Map::OnClose() {
}

void UMM_B_Map::OnClickServerChange() {
}

void UMM_B_Map::OnClickAreaPrev() {
}

void UMM_B_Map::OnClickAreaNext() {
}


