#include "AGChosenFile.h"

UAGChosenFile::UAGChosenFile() {
}

bool UAGChosenFile::IsSuccess() {
    return false;
}

int64 UAGChosenFile::GetSize() {
    return 0;
}

FString UAGChosenFile::GetOriginalPath() {
    return TEXT("");
}

FString UAGChosenFile::GetMimeType() {
    return TEXT("");
}

FString UAGChosenFile::GetHumanReadableSize(bool bytesRounded) {
    return TEXT("");
}

FString UAGChosenFile::GetFileExtensionFromMimeTypeWithoutDot() {
    return TEXT("");
}

FString UAGChosenFile::GetFileExtensionFromMimeType() {
    return TEXT("");
}

FString UAGChosenFile::GetDisplayName() {
    return TEXT("");
}

FDateTime UAGChosenFile::GetCreatedAt() {
    return FDateTime{};
}


