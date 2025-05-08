#include "ImgMediaSettings.h"

UImgMediaSettings::UImgMediaSettings() {
    this->CacheBehindPercentage = 25.00f;
    this->CacheSizeGB = 1.00f;
    this->CacheThreads = 8;
    this->CacheThreadStackSizeKB = 128;
    this->GlobalCacheSizeGB = 1.00f;
    this->UseGlobalCache = true;
    this->ExrDecoderThreads = 0;
    this->DefaultProxy = TEXT("proxy");
    this->UseDefaultProxy = false;
}


