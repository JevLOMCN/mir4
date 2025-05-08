#include "MM_TutorialPage.h"

UMM_TutorialPage::UMM_TutorialPage() {
    this->m_pPageTutorialData = NULL;
    this->m_FadeLerpTime = 0.10f;
    this->m_pTitleText = NULL;
    this->m_pDescriptionText01 = NULL;
    this->m_pDescriptionText02 = NULL;
    this->m_pTutorialImage01 = NULL;
    this->m_pTutorialImage02 = NULL;
    this->m_pSkipButton = NULL;
    this->m_pSkipPanel = NULL;
    this->img_prev = NULL;
    this->m_pPrevButton = NULL;
    this->m_pNextButton = NULL;
    this->m_pPageIndicator = NULL;
    this->m_pFadeInText = NULL;
    this->m_pFadeOutText = NULL;
    this->m_pFadeInImage = NULL;
    this->m_pFadeOutImage = NULL;
    this->cp_skip = NULL;
    this->btn_skip = NULL;
}



void UMM_TutorialPage::OnClickSkipButton() {
}

void UMM_TutorialPage::OnClickPrevButton() {
}

bool UMM_TutorialPage::OnClickPageIndicator(int32 DotIndex) {
    return false;
}

void UMM_TutorialPage::OnClickNextButton() {
}

void UMM_TutorialPage::CloseTutorial() {
}


