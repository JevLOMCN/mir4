#include "MobileInstalledContent.h"

UMobileInstalledContent::UMobileInstalledContent() {
}

bool UMobileInstalledContent::Mount(int32 PakOrder, const FString& MountPoint) {
    return false;
}

float UMobileInstalledContent::GetInstalledContentSize() {
    return 0.0f;
}

float UMobileInstalledContent::GetDiskFreeSpace() {
    return 0.0f;
}


