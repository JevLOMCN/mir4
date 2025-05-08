#include "MM_Customizing_Palette.h"

UMM_Customizing_Palette::UMM_Customizing_Palette() {
    this->m_pColorListBox = NULL;
    this->m_PresetListBox = NULL;
    this->m_pCostumeDyeListBox = NULL;
    this->m_OkBtn = NULL;
    this->m_AddSlider = NULL;
}

void UMM_Customizing_Palette::UpdatePaletteSelectData(int32 PaletteIndex) {
}

void UMM_Customizing_Palette::UpdateIconBrightness(int32 _Value) {
}

void UMM_Customizing_Palette::OnClickSubCategoryEvent(int32 SubCategoryIndex) {
}

void UMM_Customizing_Palette::OnClickPaletteItemEvent(int32 PaletteIndex) {
}

void UMM_Customizing_Palette::OnClickComponentEvent(int32 ComponentID) {
}

TArray<UMM_Customizing_PaletteItem*> UMM_Customizing_Palette::CreatePaletteItem_Implementation(int32 Count) {
    return TArray<UMM_Customizing_PaletteItem*>();
}


