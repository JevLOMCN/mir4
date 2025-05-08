#include "MediaTexture.h"

UMediaTexture::UMediaTexture() {
    this->NeverStream = true;
    this->AddressX = TA_Clamp;
    this->AddressY = TA_Clamp;
    this->AutoClear = false;
    this->MediaPlayer = NULL;
}

void UMediaTexture::SetMediaPlayer(UMediaPlayer* NewMediaPlayer) {
}

int32 UMediaTexture::GetWidth() const {
    return 0;
}

UMediaPlayer* UMediaTexture::GetMediaPlayer() const {
    return NULL;
}

int32 UMediaTexture::GetHeight() const {
    return 0;
}

float UMediaTexture::GetAspectRatio() const {
    return 0.0f;
}


