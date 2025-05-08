#include "MM_ItemSynthesis.h"

UMM_ItemSynthesis::UMM_ItemSynthesis() {
    this->STRING_ID_GREAT_SUCCESS = 1005982;
    this->STRING_ID_SUCCESS = 1005983;
    this->arICON_ITEM_GRADE.AddDefaulted(6);
    this->STRING_ID_POINT_DEACTIVE = 2004908;
    this->STRING_ID_POINT_LACK = 2004909;
    this->STRING_ID_POINT_ENOUGH = 2004910;
    this->STRING_ID_CENSER_NAME_NONE = 1005982;
    this->STRING_ID_CENSER_NAME_EPIC = 2004919;
    this->STRING_ID_CENSER_NAME_LEGNED = 2004920;
    this->m_arItemSynthesisList[0] = NULL;
    this->m_arItemSynthesisList[1] = NULL;
    this->m_arItemSynthesisList[2] = NULL;
    this->m_arItemSynthesisList[3] = NULL;
    this->m_arItemSynthesisList[4] = NULL;
    this->m_arItemSynthesisList[5] = NULL;
    this->m_arItemSynthesisList[6] = NULL;
    this->m_arItemSynthesisList[7] = NULL;
    this->m_arItemSynthesisList[8] = NULL;
    this->m_arItemSynthesisList[9] = NULL;
    this->m_C_Btn_AutoReg = NULL;
    this->m_C_Btn_Make = NULL;
    this->m_C_Btn_MakeCost = NULL;
    this->m_Txt_Desc = NULL;
    this->m_Can_Censer = NULL;
    this->m_Can_AuraEffect = NULL;
    this->m_Can_ItemGrade_Effect = NULL;
    this->m_Img_IcnItemGrade = NULL;
    this->m_Img_AuraEffect_Left = NULL;
    this->m_Img_AuraEffect_Right = NULL;
    this->m_Btn_PointReward = NULL;
    this->m_RTxt_Point = NULL;
    this->m_Txt_Desc_1 = NULL;
    this->m_RTxt_CenserGrade = NULL;
    this->m_Img_CenserHead = NULL;
    this->m_Img_CenserBody = NULL;
    this->m_Img_Indicator = NULL;
    this->m_Img_ItemGrade_Epic = NULL;
    this->m_Img_ItemGrade_Legned = NULL;
    this->m_ScrollBox = NULL;
    this->m_AniPointUP = NULL;
}

void UMM_ItemSynthesis::OnClickSynthesisPoint() {
}

void UMM_ItemSynthesis::OnClickMake() {
}

void UMM_ItemSynthesis::OnClickAutoReg() {
}


