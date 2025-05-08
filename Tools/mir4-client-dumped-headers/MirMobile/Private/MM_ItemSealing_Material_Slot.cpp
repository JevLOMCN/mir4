#include "MM_ItemSealing_Material_Slot.h"

UMM_ItemSealing_Material_Slot::UMM_ItemSealing_Material_Slot() {
    this->AutoUpdateItemName = true;
    this->m_Img_GradeBgEffect = NULL;
    this->m_ImgEquipMaark = NULL;
    this->m_ImgTypeImage = NULL;
    this->m_BtnSetItem = NULL;
    this->m_ImgRemoveItemPanel = NULL;
    this->m_ImgRemoveItemBtn = NULL;
    this->m_TxtItemSmeltingLevel = NULL;
    this->m_ImgPlusSpecial = NULL;
    this->Material_Switch = NULL;
    this->m_MakeType = EMakeItemType::Normal;
    this->m_Img_Tier = NULL;
    this->m_TxtItemName = NULL;
    this->m_TxtCount = NULL;
    this->m_Img_UserLock = NULL;
}

void UMM_ItemSealing_Material_Slot::OnClickDeleteItem() {
}


