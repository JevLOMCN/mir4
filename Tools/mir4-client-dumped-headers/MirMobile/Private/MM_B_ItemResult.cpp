#include "MM_B_ItemResult.h"

UMM_B_ItemResult::UMM_B_ItemResult() {
    this->m_SkipTime = 0.80f;
    this->GuideMsgID = 101016;
    this->m_OpenAni = NULL;
    this->m_OpenAni_Succeeded = NULL;
    this->m_OpenAni_GreateSucceeded = NULL;
    this->m_OpenAni_Fail = NULL;
    this->m_OpenAni_Fiasco = NULL;
    this->m_OpenAni_ForceCriticalFail = NULL;
    this->m_SuccessEffect = NULL;
    this->m_FailEffect = NULL;
    this->m_FiascoEffect = NULL;
    this->m_ForceCriticalFail = NULL;
    this->m_TitleLight[0] = NULL;
    this->m_TitleLight[1] = NULL;
    this->m_TitleLight[2] = NULL;
    this->m_TitleLight[3] = NULL;
    this->m_BtnClose = NULL;
    this->m_TxtResultTitle = NULL;
    this->m_TxtGuideMessage = NULL;
    this->m_ItemInfo = NULL;
    this->m_AbilityInfo = NULL;
    this->m_FailInfo = NULL;
    this->m_TranscendFailInfo = NULL;
    this->m_TranscendPassiveSkillInfo = NULL;
    this->m_SingleAbilityInfo = NULL;
    this->m_PlayAni = NULL;
    this->m_Panel_Center = NULL;
    this->m_Txt_NameInCenter = NULL;
    this->m_Txt_ValueInCenter = NULL;
    this->m_Txt_ValueNextnCenter = NULL;
    this->m_IsSkipAni = false;
    this->m_Panel_Auto_Goods = NULL;
    this->m_Txt_UseMat = NULL;
    this->m_Img_SmeltStone = NULL;
    this->m_Txt_SmeltStone = NULL;
    this->m_Img_SmeltBlackIron = NULL;
    this->m_Txt_SmeltBlackIron = NULL;
    this->m_Img_SmeltCost = NULL;
    this->m_Txt_SmeltCost = NULL;
    this->m_Panel_ClosedTraining = NULL;
    this->m_Txt_PrevClosedTrainigCollectValue = NULL;
    this->m_Txt_ClosedTrainigCollectValue = NULL;
    this->m_AutoSmeltAni_Succees = NULL;
    this->m_AutoSmeltAni_Fail = NULL;
    this->m_AutoSmeltAni_Broken = NULL;
}

void UMM_B_ItemResult::OnClickClose() {
}


