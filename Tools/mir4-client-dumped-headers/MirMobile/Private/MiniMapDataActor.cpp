#include "MiniMapDataActor.h"

AMiniMapDataActor::AMiniMapDataActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_InfoMainType = EMapMiniInfoMainType::Default;
    this->m_InfoSubType = 3;
    this->m_InfoSubTypeValue = 0;
    this->m_InfoValue = 0;
    this->m_DetailInfoValue = 0;
    this->m_InfoStringPosType = EMapMiniInfoStringPosType::Bottom;
    this->m_InfoStringID = 0;
}


