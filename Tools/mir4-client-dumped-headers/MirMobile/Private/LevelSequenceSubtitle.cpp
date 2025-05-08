#include "LevelSequenceSubtitle.h"

ALevelSequenceSubtitle::ALevelSequenceSubtitle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_FadeValue = 0.00f;
    this->m_StringID = TEXT("0");
    this->m_pSoundCue = NULL;
    this->m_WidgetName = TEXT("0");
}


UFadeWidget* ALevelSequenceSubtitle::CreateFadeWidget() {
    return NULL;
}


