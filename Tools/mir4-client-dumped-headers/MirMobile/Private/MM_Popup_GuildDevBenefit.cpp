#include "MM_Popup_GuildDevBenefit.h"

UMM_Popup_GuildDevBenefit::UMM_Popup_GuildDevBenefit() {
    this->mOpenAni = NULL;
    this->mCloseAni = NULL;
    this->mTxtFxiedTitle = NULL;
    this->mTxtFxiedLevel = NULL;
    this->mTxtFirstAttributeName = NULL;
    this->mTxtSecondAttributeName = NULL;
    this->mScrollBox = NULL;
    this->mBtnClose = NULL;
}

float UMM_Popup_GuildDevBenefit::PlayEndAnimation() {
    return 0.0f;
}

void UMM_Popup_GuildDevBenefit::OnClickClose() {
}


