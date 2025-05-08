#include "LogoMediaWidget.h"

ULogoMediaWidget::ULogoMediaWidget() {
    this->m_MediaPlayer = NULL;
    this->m_MediaTexture = NULL;
    this->m_Movie_StartLoop = NULL;
    this->m_Movie_AccountConnectIn = NULL;
    this->m_Movie_AccountConnectLoop = NULL;
    this->m_Movie_AccessLoop = NULL;
    this->m_Movie_EndIn = NULL;
    this->m_LogoBgm = NULL;
    this->m_fMediaStartDelay = 0.50f;
    this->m_MediaSoundActor = NULL;
    this->m_Img_Moive = NULL;
}

void ULogoMediaWidget::ShowMovieImage() {
}

void ULogoMediaWidget::OnEndReached() {
}


