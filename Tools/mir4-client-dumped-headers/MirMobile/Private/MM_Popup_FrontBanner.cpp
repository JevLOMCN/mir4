#include "MM_Popup_FrontBanner.h"

UMM_Popup_FrontBanner::UMM_Popup_FrontBanner() {
    this->mTxtStopToday = NULL;
    this->mCheckBox = NULL;
    this->mImgDownLoad = NULL;
    this->mBtnClose = NULL;
    this->mDownloadImage = NULL;
}

void UMM_Popup_FrontBanner::OnSuccessDownloadImage(UTexture2DDynamic* Texture) {
}

void UMM_Popup_FrontBanner::OnFailDownloadImage(UTexture2DDynamic* Texture) {
}

void UMM_Popup_FrontBanner::OnClickClose() {
}

void UMM_Popup_FrontBanner::OnClickCheckBox(bool Checked) {
}


