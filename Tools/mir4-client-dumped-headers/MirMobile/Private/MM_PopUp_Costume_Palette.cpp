#include "MM_PopUp_Costume_Palette.h"

UMM_PopUp_Costume_Palette::UMM_PopUp_Costume_Palette() {
    this->m_AniStart = NULL;
    this->m_AniEnd = NULL;
    this->Palette_Main = NULL;
    this->Palette_Sub = NULL;
    this->Grid_Main = NULL;
    this->Grid_Sub = NULL;
    this->Btn_Random = NULL;
    this->Btn_Go_Preset = NULL;
    this->Btn_Cancel = NULL;
    this->btn_cost = NULL;
    this->Panel_Summary = NULL;
    this->Panel_Color = NULL;
    this->Btn_PaletteClose = NULL;
    this->Txt_Title = NULL;
    this->Txt_PaletteTitle = NULL;
    this->btn_close = NULL;
    this->Scroll_WrapBox_Preset = NULL;
    this->Scroll_WrapBox_Direct_Main = NULL;
    this->Scroll_WrapBox_Direct_Sub = NULL;
    this->SlideBar_Main = NULL;
    this->SlideBar_Sub = NULL;
    this->SelectCostumeID = 0;
    this->DirtyFlag = false;
    this->WarrnigUseID = false;
    this->ItemUseId = 0;
    this->m_MaxSlotCount = 0;
    this->m_CurrentSlotCount = 0;
    this->Select_PaletteNumber_CH1 = 0;
    this->Select_PaletteNumber_CH2 = 0;
    this->m_MaxSlotCount_Direct_CH1 = 0;
    this->m_CurrentSlotCount_Direct_CH1 = 0;
    this->m_MaxSlotCount_Direct_CH2 = 0;
    this->m_CurrentSlotCount_Direct_CH2 = 0;
    this->STRING_BTN_PURCHASE = 1027021;
    this->STRING_TITLE_PALETTE = 1027138;
    this->STRING_TITLE_PRESET = 1047001;
    this->STRING_MAIN_COLOR = 1027149;
    this->STRING_SUB_COLOR = 1027150;
}

float UMM_PopUp_Costume_Palette::PlayStartAnimation() {
    return 0.0f;
}

float UMM_PopUp_Costume_Palette::PlayEndAnimation() {
    return 0.0f;
}

void UMM_PopUp_Costume_Palette::OnClickSlot_Direct_CH2(int32 Palette_CostumeID, int32 Palette_Number_Ch1, int32 Palette_Number_Ch2, bool bEnable) {
}

void UMM_PopUp_Costume_Palette::OnClickSlot_Direct_CH1(int32 Palette_CostumeID, int32 Palette_Number_Ch1, int32 Palette_Number_Ch2, bool bEnable) {
}

void UMM_PopUp_Costume_Palette::OnClickSlot(int32 Palette_CostumeID, int32 Palette_Number_Ch1, int32 Palette_Number_Ch2, bool bEnable) {
}

void UMM_PopUp_Costume_Palette::OnClickRandomPreset() {
}

void UMM_PopUp_Costume_Palette::OnClickPaletteClose() {
}

void UMM_PopUp_Costume_Palette::OnClickGoPreset() {
}

void UMM_PopUp_Costume_Palette::OnClickCost() {
}

void UMM_PopUp_Costume_Palette::OnClickColorCH2(int32 PaletteIndex) {
}

void UMM_PopUp_Costume_Palette::OnClickColorCH1(int32 PaletteIndex) {
}

void UMM_PopUp_Costume_Palette::OnClickClose() {
}


