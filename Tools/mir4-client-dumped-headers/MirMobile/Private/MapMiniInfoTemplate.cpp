#include "MapMiniInfoTemplate.h"

FMapMiniInfoTemplate::FMapMiniInfoTemplate() {
    this->Name = 0;
    this->InfoMainType = EMapMiniInfoMainType::None;
    this->InfoSubType = 0;
    this->InfoSubTypeValue = 0;
    this->InfoValue = 0;
    this->DetailInfoValue = 0;
    this->InfoStringId = 0;
    this->InfoStringPosType = EMapMiniInfoStringPosType::None;
}

