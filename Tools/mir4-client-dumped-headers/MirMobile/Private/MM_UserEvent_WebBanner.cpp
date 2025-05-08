#include "MM_UserEvent_WebBanner.h"

UMM_UserEvent_WebBanner::UMM_UserEvent_WebBanner() {
    this->m_Img_Banner = NULL;
    this->mDownloadImage = NULL;
}

void UMM_UserEvent_WebBanner::OnSuccessDownloadImage(UTexture2DDynamic* Texture) {
}

void UMM_UserEvent_WebBanner::OnFailDownloadImage(UTexture2DDynamic* Texture) {
}


