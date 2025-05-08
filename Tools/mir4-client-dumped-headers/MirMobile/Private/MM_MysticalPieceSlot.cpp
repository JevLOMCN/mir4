#include "MM_MysticalPieceSlot.h"

UMM_MysticalPieceSlot::UMM_MysticalPieceSlot() {
    this->m_ImgJewelLock = NULL;
    this->m_ImgPlus = NULL;
    this->m_Imgindicator = NULL;
    this->m_ImgDisabled = NULL;
    this->txt_grade = NULL;
    this->m_Img_Unlock = NULL;
    this->m_Img_Tier = NULL;
    this->m_BtnUnmount = NULL;
    this->m_ActiveSlot = false;
    this->m_JewelSlotIndex = 0;
    this->img_guide = NULL;
    this->animation_guide = NULL;
    this->m_Img_GradeBgEffect = NULL;
    this->m_Img_GradeBgEquipEffect = NULL;
    this->m_Txt_SmeltingLV = NULL;
}

void UMM_MysticalPieceSlot::OnClickUnmountButton() {
}


