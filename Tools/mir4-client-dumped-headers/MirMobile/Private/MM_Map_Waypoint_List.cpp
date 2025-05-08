#include "MM_Map_Waypoint_List.h"

UMM_Map_Waypoint_List::UMM_Map_Waypoint_List() {
    this->m_arWaypointCategroy[0] = NULL;
    this->m_arWaypointCategroy[1] = NULL;
    this->m_arWaypointCategroy[2] = NULL;
    this->m_arWaypointCategroy[3] = NULL;
    this->m_arWaypointCategroy[4] = NULL;
    this->m_arWaypointCategroy[5] = NULL;
    this->m_arWaypointCategroy[6] = NULL;
    this->m_arWaypointCategroy[7] = NULL;
    this->m_arWaypointCategroy[8] = NULL;
    this->m_arMapCheckBtn[0] = NULL;
    this->m_arMapCheckBtn[1] = NULL;
    this->m_Txt_Channel = NULL;
    this->m_Scr_WaypointList = NULL;
    this->m_CB_ChannelChange = NULL;
    this->m_CB_Move = NULL;
    this->m_CB_Immedi_Move = NULL;
    this->m_Hrz_Notice = NULL;
    this->m_RTxt_Notice = NULL;
    this->m_Txt_MapType = NULL;
    this->m_btn_ChangeMapType = NULL;
}

void UMM_Map_Waypoint_List::StopAutoQuest(bool isImmediate) {
}

void UMM_Map_Waypoint_List::OnClickMove() {
}

void UMM_Map_Waypoint_List::OnClickImmediMove() {
}

void UMM_Map_Waypoint_List::OnClickChannelChange() {
}

void UMM_Map_Waypoint_List::OnClickCancel() {
}

void UMM_Map_Waypoint_List::OnClickBuy() {
}

void UMM_Map_Waypoint_List::OnChannelChange() {
}


