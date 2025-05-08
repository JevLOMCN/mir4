#include "MobilePendingContent.h"

UMobilePendingContent::UMobilePendingContent() {
}

void UMobilePendingContent::StartInstall(FOnContentInstallSucceeded OnSucceeded, FOnContentInstallFailed OnFailed) {
}

float UMobilePendingContent::GetTotalDownloadedSize() {
    return 0.0f;
}

float UMobilePendingContent::GetRequiredDiskSpace() {
    return 0.0f;
}

float UMobilePendingContent::GetInstallProgress() {
    return 0.0f;
}

FText UMobilePendingContent::GetDownloadStatusText() {
    return FText::GetEmpty();
}

float UMobilePendingContent::GetDownloadSpeed() {
    return 0.0f;
}

float UMobilePendingContent::GetDownloadSize() {
    return 0.0f;
}


