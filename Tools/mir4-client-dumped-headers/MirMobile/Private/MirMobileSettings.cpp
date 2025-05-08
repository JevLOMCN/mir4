#include "MirMobileSettings.h"

UMirMobileSettings::UMirMobileSettings() {
    this->MajorVersion = 0;
    this->MinorVersion = 68;
    this->PatchVersion = 66;
    this->MaxFPS = 120.00f;
    this->PakSearchOrder = EPakSearchOrder::DlcPakFirst;
    this->NotEnoughMemoryThresholdMB = 64;
    this->SkipPreloadingOnNotEnoughMemory = true;
    this->ConditionalFullPurgeOnAsyncPackageLoader = true;
    this->GarbageCollectionPerOneSecondOnEditor = false;
    this->VisualHelperMaxDrawDistance = 10000.00f;
    this->AdjustAppToken_AosIos = TEXT("uwb6nsb452io");
    this->AdjustAppToken_OneStore = TEXT("75yqe1z3hxc0");
    this->AdjustAppToken_Galaxy = TEXT("os8r6hcvi77k");
    this->AdjustSecretId = TEXT("1");
    this->AdjustInfo1 = TEXT("728744668");
    this->AdjustInfo2 = TEXT("227138952");
    this->AdjustInfo3 = TEXT("1696617055");
    this->AdjustInfo4 = TEXT("1722512982");
    this->FastLevelLoading = true;
    this->LoadingBarSpeed = 2.00f;
    this->LoadingFadeOutTime = 1.50f;
    this->AlwaysUpdateCullDistanceOnEditor = false;
}


