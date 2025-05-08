#include "MovieSceneLevelVisibilitySection.h"

UMovieSceneLevelVisibilitySection::UMovieSceneLevelVisibilitySection() {
    this->Visibility = ELevelVisibility::Visible;
}

void UMovieSceneLevelVisibilitySection::SetVisibility(ELevelVisibility InVisibility) {
}

void UMovieSceneLevelVisibilitySection::SetLevelNames(const TArray<FName>& InLevelNames) {
}

ELevelVisibility UMovieSceneLevelVisibilitySection::GetVisibility() const {
    return ELevelVisibility::Visible;
}

TArray<FName> UMovieSceneLevelVisibilitySection::GetLevelNames() const {
    return TArray<FName>();
}


