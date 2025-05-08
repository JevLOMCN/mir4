#include "MM_UIShopBanner.h"

UMM_UIShopBanner::UMM_UIShopBanner() {
    this->mTxtStopToday = NULL;
    this->mCheckBox = NULL;
    this->mImgDownLoad = NULL;
    this->mBtnClose = NULL;
    this->mDownloadImage = NULL;
}

void UMM_UIShopBanner::OnSuccessDownloadImage(UTexture2DDynamic* Texture) {
}

void UMM_UIShopBanner::OnFailDownloadImage(UTexture2DDynamic* Texture) {
}

void UMM_UIShopBanner::OnClickClose() {
}

void UMM_UIShopBanner::OnClickCheckBox(bool Checked) {
}


