#include "MM_GameModeBase.h"

AMM_GameModeBase::AMM_GameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_pBackgroundParamCollection = NULL;
    this->m_pFriendMonster = NULL;
    this->m_pSelectTarget = NULL;
    this->m_pLockOnTarget = NULL;
    this->EndLevelTravel = false;
    this->m_pUIBackGroundActor = NULL;
    this->SituationDirectiveActor = NULL;
    this->m_pHQPlayer = NULL;
    this->m_pPortraitCaptureActor = NULL;
    this->m_pPlayerPortraitRenderTarget = NULL;
    this->m_pContentsLightManager = NULL;
}

void AMM_GameModeBase::UpdatePortrait(bool bDelayCapture, bool bTest) {
}

void AMM_GameModeBase::OnFinishedSequence() {
}

void AMM_GameModeBase::OnFinishedInitialEntrySequence() {
}

void AMM_GameModeBase::OnFinishDirectingEvent(bool bHudOpen) {
}

AMM_GameStateBase* AMM_GameModeBase::GetCurGameState() {
    return NULL;
}

void AMM_GameModeBase::DeletePortraitImage() {
}


