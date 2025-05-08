#include "QuestRequestTemplate.h"

FQuestRequestTemplate::FQuestRequestTemplate() {
    this->RequestID = 0;
    this->RequestIndex = 0;
    this->ServerType = 0;
    this->RequestGrade = 0;
    this->RequestShowType = 0;
    this->RequestIconType = 0;
    this->RequestStageVisible = 0;
    this->PartyMember = 0;
    this->StepNo = 0;
    this->RequestHint = 0;
    this->RequestStory = 0;
    this->StoryNo = 0;
    this->RequestCombatPower = 0;
    this->LockInvisible = 0;
    this->RequestOpenCondition = 0;
    this->RequestOpenConditionValue = 0;
    this->AcceptMoveNPC = 0;
    this->AcceptNPC = 0;
    this->AcceptCinematicDialogueID = 0;
    this->HintNPC = 0;
    this->HintCinematicDialogueID = 0;
    this->MapNpcShowType = 0;
    this->MissionType = QuestMissionType::None;
    this->HelperType = QuestHelperType::NONE;
    this->MissionTarget = 0;
    this->Parameter1 = 0;
    this->Parameter2 = 0;
    this->AutoBattleType = 0;
    this->PcTargetSearchDist = 0;
    this->CoordinateRange = 0;
    this->StringMESSAGE = 0;
    this->CountIndication = 0;
    this->RequestGetStageId = 0;
    this->RequestStageId = 0;
    this->CoordinateShowType = 0;
    this->EffectId = 0;
    this->ContentOpenPage = 0;
    this->RequestTitleSID = 0;
    this->RequestObjectiveSID = 0;
    this->RewardExp = 0;
    this->RewardGOLD = 0;
    this->RewardGoodsType = 0;
    this->RewardGoodsCount = 0;
    this->RewardItemCount01 = 0;
    this->RewardItemCount02 = 0;
    this->OpenConditionHide = 0;
}

