#include "MM_MoviePlayerWidget.h"

UMM_MoviePlayerWidget::UMM_MoviePlayerWidget() {
    this->m_MediaPlayer = NULL;
    this->m_MediaTexture = NULL;
    this->m_MediaTextureMat = NULL;
    this->m_MediaSource = NULL;
    this->m_MediaSoundActor = NULL;
    this->m_Img_Movie = NULL;
}

void UMM_MoviePlayerWidget::StopMedia() {
}

void UMM_MoviePlayerWidget::PlayMedia(const FString& strMediaPath) {
}

void UMM_MoviePlayerWidget::OnEndReached() {
}


