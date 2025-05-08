#include "MM_ItemSynthesis_List.h"

UMM_ItemSynthesis_List::UMM_ItemSynthesis_List() {
    this->m_arMaterialSlot[0] = NULL;
    this->m_arMaterialSlot[1] = NULL;
    this->m_arMaterialSlot[2] = NULL;
    this->m_arMaterialSlot[3] = NULL;
    this->m_RTxt_Grade = NULL;
    this->m_Txt_SuccessRate = NULL;
    this->m_Img_Active = NULL;
    this->m_Img_DeActive = NULL;
    this->m_Grid_ItemGrade_Effect = NULL;
    this->m_Ani_ItemGrade_Rare_Effect = NULL;
    this->m_Ani_ItemGrade_Epic_Effect = NULL;
    this->m_Ani_ItemGrade_Legned_Effect = NULL;
}

void UMM_ItemSynthesis_List::OnClickSlot(UMM_Slot_Base* pSlot) {
}


