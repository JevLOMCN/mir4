#include "GameMapsSettings.h"

UGameMapsSettings::UGameMapsSettings() {
    this->bUseSplitscreen = true;
    this->TwoPlayerSplitscreenLayout = ETwoPlayerSplitScreenType::Horizontal;
    this->ThreePlayerSplitscreenLayout = EThreePlayerSplitScreenType::FavorTop;
    this->FourPlayerSplitscreenLayout = EFourPlayerSplitScreenType::Grid;
    this->bOffsetPlayerGamepadIds = false;
}

void UGameMapsSettings::SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer) {
}

bool UGameMapsSettings::GetSkipAssigningGamepadToPlayer1() const {
    return false;
}

UGameMapsSettings* UGameMapsSettings::GetGameMapsSettings() {
    return NULL;
}


