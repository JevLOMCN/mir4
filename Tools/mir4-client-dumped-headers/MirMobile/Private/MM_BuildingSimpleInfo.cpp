#include "MM_BuildingSimpleInfo.h"

UMM_BuildingSimpleInfo::UMM_BuildingSimpleInfo() {
    this->m_Img_Icon = NULL;
    this->m_Img_Lock = NULL;
    this->m_Txt_Step = NULL;
    this->m_Txt_Name = NULL;
    this->m_Txt_Desc = NULL;
    this->m_Txt_CompleteCount = NULL;
    this->m_Img_Combat = NULL;
    this->m_Txt_Combat = NULL;
    this->m_Btn_Info = NULL;
    this->m_Img_Indicator = NULL;
    this->m_StepStrID = 1104056;
    this->m_CompleteOpenStrID = 1104055;
    this->m_CompleteStepUpStrID = 1104060;
    this->m_OnGointStepUpStrID = 1104054;
    this->m_CountPerMaxStrID = 1104058;
    this->m_DetailInfoStrID = 1104059;
}

void UMM_BuildingSimpleInfo::OnClickDetailInfo() {
}

void UMM_BuildingSimpleInfo::OnClickClosedDetailInfo() {
}


