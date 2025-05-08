#include "MM_Inventory_Tab.h"

UMM_Inventory_Tab::UMM_Inventory_Tab() {
    this->DefaultIconId = 0;
    this->SelectIconId = 0;
    this->m_ImgSymbolIcon = NULL;
    this->m_ImgSymbolIcon_Select = NULL;
    this->Grid_Inven = NULL;
    this->Grid_Info = NULL;
    this->Img_SelectBG = NULL;
    this->Txt_TabNum = NULL;
    this->Img_Indicator = NULL;
    this->Img_BtnIndicator = NULL;
    this->Btn_Tab = NULL;
    this->Txt_TabName_1 = NULL;
    this->Btn_Tab_1 = NULL;
    this->m_Img_TabSelect = NULL;
    this->m_Img_TabDeSelect = NULL;
    this->m_PanEffect = NULL;
}

void UMM_Inventory_Tab::ShowIndicator(int32 iIndicator) {
}

void UMM_Inventory_Tab::ShowBtnIndicator(int32 iIndicator) {
}

void UMM_Inventory_Tab::OnReleasedTab() {
}

void UMM_Inventory_Tab::OnClickTab() {
}


