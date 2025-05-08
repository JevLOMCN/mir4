#include "MM_WarpMoveManager.h"

UMM_WarpMoveManager::UMM_WarpMoveManager() {
    this->bSendWarp = false;
    this->UsedPortal = false;
    this->WarpInProgress = false;
    this->WarpMethodType = EWarpMethodType::None;
    this->WarpContentsType = EWarpContentsType::None;
    this->StageId = 0;
    this->RecvStageID = 0;
    this->ReservedAutoMoveState = EAutoMoveState::None;
    this->ReservedAutoBattleState = EAutoBattleState::None;
    this->ReservedBehaviorType = EBehaviorType::Default;
    this->TargetID = 0;
    this->TriggerPortalID = 0;
    this->ActiveQuestID = 0;
    this->ActiveQuestType = 0;
    this->MoveRequestID = 0;
    this->MoveRequestNpcID = 0;
    this->ServerWarpMethod = 0;
    this->ScriptWarp = false;
    this->bChannelWaiting = false;
    this->iChannelWaitingWarpTID = 0;
    this->iChannelWaitingZoneUID = 0;
    this->ZoneUniqueID = 0;
}


