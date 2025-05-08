#include "MediaPlayerOptions.h"

FMediaPlayerOptions::FMediaPlayerOptions() {
    this->PlayOnOpen = EMediaPlayerOptionBooleanOverride::UseMediaPlayerSetting;
    this->Loop = EMediaPlayerOptionBooleanOverride::UseMediaPlayerSetting;
}

