#include "PlayMovieWidget.h"

UPlayMovieWidget::UPlayMovieWidget() {
    this->m_MediaPlayer = NULL;
    this->m_MediaTexture = NULL;
    this->m_MediaSource = NULL;
    this->m_fSkipDelayTime = 0.00f;
    this->m_pSkipBtnPanel = NULL;
    this->m_pSkipButton = NULL;
    this->m_pMovieSubtitleText = NULL;
    this->m_pSubtitleData = NULL;
}

void UPlayMovieWidget::OnEndReached() {
}

void UPlayMovieWidget::OnCloseEvent() {
}

void UPlayMovieWidget::OnClickSkip() {
}


