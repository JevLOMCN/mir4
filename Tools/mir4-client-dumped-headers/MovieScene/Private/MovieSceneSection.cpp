#include "MovieSceneSection.h"

UMovieSceneSection::UMovieSceneSection() {
    this->RowIndex = 0;
    this->OverlapPriority = 0;
    this->bIsActive = true;
    this->bIsLocked = false;
    this->StartTime = 0.00f;
    this->EndTime = 0.00f;
    this->PrerollTime = 0.00f;
    this->PostrollTime = 0.00f;
    this->bIsInfinite = false;
    this->bSupportsInfiniteRange = false;
}

void UMovieSceneSection::SetRowIndex(int32 NewRowIndex) {
}

void UMovieSceneSection::SetPreRollFrames(int32 InPreRollFrames) {
}

void UMovieSceneSection::SetPostRollFrames(int32 InPostRollFrames) {
}

void UMovieSceneSection::SetOverlapPriority(int32 NewPriority) {
}

void UMovieSceneSection::SetIsLocked(bool bInIsLocked) {
}

void UMovieSceneSection::SetIsActive(bool bInIsActive) {
}

void UMovieSceneSection::SetCompletionMode(EMovieSceneCompletionMode InCompletionMode) {
}

void UMovieSceneSection::SetBlendType(EMovieSceneBlendType InBlendType) {
}

bool UMovieSceneSection::IsLocked() const {
    return false;
}

bool UMovieSceneSection::IsActive() const {
    return false;
}

int32 UMovieSceneSection::GetRowIndex() const {
    return 0;
}

int32 UMovieSceneSection::GetPreRollFrames() const {
    return 0;
}

int32 UMovieSceneSection::GetPostRollFrames() const {
    return 0;
}

int32 UMovieSceneSection::GetOverlapPriority() const {
    return 0;
}

EMovieSceneCompletionMode UMovieSceneSection::GetCompletionMode() const {
    return EMovieSceneCompletionMode::KeepState;
}

FOptionalMovieSceneBlendType UMovieSceneSection::GetBlendType() const {
    return FOptionalMovieSceneBlendType{};
}


