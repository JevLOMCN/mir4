#include "MM_Common_Dialog_Btn.h"

UMM_Common_Dialog_Btn::UMM_Common_Dialog_Btn() {
    this->m_QuestSoundID = 220730;
    this->m_RequestSoundID = 220730;
    this->m_AcceptSoundID = 220730;
    this->m_HintSoundID = 220730;
    this->m_MainQuestDialogSound = 0;
    this->m_MissionDialogSound = 0;
    this->m_RequestDialogSound = 0;
    this->m_Spc_Size = NULL;
    this->m_Img_Back = NULL;
    this->m_Btn_Main = NULL;
    this->m_AniClick = NULL;
}

void UMM_Common_Dialog_Btn::OnClickButton() {
}


