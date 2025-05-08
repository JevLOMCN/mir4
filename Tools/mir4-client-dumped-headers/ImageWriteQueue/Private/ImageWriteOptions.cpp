#include "ImageWriteOptions.h"

FImageWriteOptions::FImageWriteOptions() {
    this->Format = EDesiredImageFormat::PNG;
    this->CompressionQuality = 0;
    this->bOverwriteFile = false;
    this->bAsync = false;
}

