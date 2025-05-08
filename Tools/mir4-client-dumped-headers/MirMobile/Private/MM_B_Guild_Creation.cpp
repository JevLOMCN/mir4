#include "MM_B_Guild_Creation.h"

UMM_B_Guild_Creation::UMM_B_Guild_Creation() {
    this->m_iCreateCost = 100000;
    this->m_AniStart = NULL;
    this->m_AniEnd = NULL;
    this->m_Txt_Notice = NULL;
    this->m_Img_Frame = NULL;
    this->m_Img_Symbol = NULL;
    this->m_Edit_GuildName = NULL;
    this->m_Scr_SymbolList = NULL;
    this->m_Scr_FrameList = NULL;
    this->m_CB_SymbolList_Left = NULL;
    this->m_CB_SymbolList_Right = NULL;
    this->m_CB_FrameList_Left = NULL;
    this->m_CB_FrameList_Right = NULL;
    this->m_CB_Create = NULL;
}

float UMM_B_Guild_Creation::PlayEndAnimation() {
    return 0.0f;
}

void UMM_B_Guild_Creation::OnClickSymbolList_Right() {
}

void UMM_B_Guild_Creation::OnClickSymbolList_Left() {
}

void UMM_B_Guild_Creation::OnClickFrameList_Right() {
}

void UMM_B_Guild_Creation::OnClickFrameList_Left() {
}

void UMM_B_Guild_Creation::OnClickCreate() {
}

void UMM_B_Guild_Creation::OnChangeGuildName(const FText& Text) {
}


