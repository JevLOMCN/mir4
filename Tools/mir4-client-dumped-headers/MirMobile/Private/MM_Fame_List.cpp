#include "MM_Fame_List.h"

UMM_Fame_List::UMM_Fame_List() {
    this->CanvasPanel = NULL;
    this->Grid_Title_Info = NULL;
    this->ScrollBox_Info = NULL;
    this->Grid_Board = NULL;
    this->ScrollBox_Board = NULL;
    this->Txt_Title_Info = NULL;
    this->Btn_Close_Info = NULL;
    this->Txt_Title_Board = NULL;
    this->Btn_Close_Board = NULL;
    this->m_MaxInfoSlotCount = 0;
    this->m_CurrentInfoSlotCount = 0;
    this->m_MaxBoardSlotCount = 0;
    this->m_CurrentBoardSlotCount = 0;
    this->STRID_BOARD_TITLE = 1062006;
}

void UMM_Fame_List::OnClickClose() {
}


