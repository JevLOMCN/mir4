#include "CutsceneDialogueWidget.h"

UCutsceneDialogueWidget::UCutsceneDialogueWidget() {
    this->m_DialogueVisible = ESlateVisibility::Visible;
    this->m_SkipButtonVisible = ESlateVisibility::Visible;
    this->m_pAnim_Next = NULL;
    this->m_NameTxtBlock = NULL;
    this->m_DialogBox = NULL;
    this->m_pCanSkip = NULL;
    this->m_pTalkSkip = NULL;
    this->m_pQuestTitlePanel = NULL;
    this->m_pTxtQuestTitleName = NULL;
}

void UCutsceneDialogueWidget::OnClickSkipText() {
}

void UCutsceneDialogueWidget::OnClickFlipText() {
}



