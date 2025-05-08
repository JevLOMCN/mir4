#include "MM_AdManager.h"

UMM_AdManager::UMM_AdManager() {
    this->AdObject = NULL;
}

void UMM_AdManager::OnRewardedAdUserEarhedReward(const FString& RewardType, int32 Amount) {
}

void UMM_AdManager::OnRewardedAdOpened() {
}

void UMM_AdManager::OnRewardedAdLoaded() {
}

void UMM_AdManager::OnRewardedAdFailedToShow(int32 ErrorCode, const FString& ErrorMessage) {
}

void UMM_AdManager::OnRewardedAdFailedToLoad(int32 ErrorCode, const FString& ErrorMessage) {
}

void UMM_AdManager::OnRewardedAdClosed() {
}


