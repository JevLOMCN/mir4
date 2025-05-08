#include "MM_Guild_DevLevelUpResult.h"

UMM_Guild_DevLevelUpResult::UMM_Guild_DevLevelUpResult() {
    this->mOpenAni = NULL;
    this->mCloseAni = NULL;
    this->mAniFail = NULL;
    this->mBtnClose = NULL;
    this->mTxtDesc = NULL;
    this->mPanelSuccess = NULL;
    this->mTxtLevelUpSuccessTitle = NULL;
    this->mTxtSuccessTitle = NULL;
    this->mTxtBeforeLevel = NULL;
    this->mTxtAfterLevel = NULL;
    this->mImgIcon = NULL;
    this->mPanelFail = NULL;
    this->mTxtLevelUpFailTitle = NULL;
    this->mTxtFailTitle = NULL;
    this->mTxtBeforeLevelFail = NULL;
    this->mTxtAfterLevelFail = NULL;
    this->mImgIconFail = NULL;
}

float UMM_Guild_DevLevelUpResult::PlayEndAnimation() {
    return 0.0f;
}

void UMM_Guild_DevLevelUpResult::OnClickClose() {
}


