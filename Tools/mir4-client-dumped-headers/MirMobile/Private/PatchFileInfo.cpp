#include "PatchFileInfo.h"

FPatchFileInfo::FPatchFileInfo() {
    this->Step = 0;
    this->needDecompress = false;
    this->crc = 0;
    this->downloadTargetSize = 0;
    this->currentDownloadSize = 0;
}

