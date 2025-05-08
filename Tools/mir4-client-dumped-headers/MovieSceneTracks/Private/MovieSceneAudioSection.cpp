#include "MovieSceneAudioSection.h"

UMovieSceneAudioSection::UMovieSceneAudioSection() {
    this->sound = NULL;
    this->StartOffset = -340282346638528859811704183484516925440.00f;
    this->AudioStartTime = -340282346638528859811704183484516925440.00f;
    this->AudioDilationFactor = -340282346638528859811704183484516925440.00f;
    this->AudioVolume = -340282346638528859811704183484516925440.00f;
    this->bLooping = true;
    this->bSuppressSubtitles = false;
    this->bOverrideAttenuation = false;
    this->AttenuationSettings = NULL;
}

void UMovieSceneAudioSection::SetStartOffset(FFrameNumber InStartOffset) {
}

void UMovieSceneAudioSection::SetSound(USoundBase* InSound) {
}

FFrameNumber UMovieSceneAudioSection::GetStartOffset() const {
    return FFrameNumber{};
}

USoundBase* UMovieSceneAudioSection::GetSound() const {
    return NULL;
}


