#include "PlaySoundTrigger.h"
#include "ETriggerType.h"

APlaySoundTrigger::APlaySoundTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_TriggerType = ETriggerType::PLAYSOUND;
    this->m_bActiveTriggerCondition = false;
    this->m_SoundID = 0;
}


