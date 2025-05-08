#include "QuestTemplate.h"

FQuestTemplate::FQuestTemplate() {
    this->QuestId = 0;
    this->QuestLevel = 0;
    this->StepNo = 0;
    this->MissionType = QuestMissionType::None;
    this->AutoBattleType = 0;
    this->PcTargetSearchDist = 0;
    this->CoordinateRange = 0;
    this->QuestTitleSID = 0;
    this->QuestMissionSID = 0;
    this->MissionTarget = 0;
    this->Parameter1 = 0;
    this->Parameter2 = 0;
    this->CountIndication = false;
    this->MissionStageId = 0;
    this->QuestTrackerType = 0.00f;
    this->SoundId = 0;
    this->SoundRange = 0.00f;
    this->EffectId = 0;
    this->IconID = 0;
    this->RewardExp = 0;
    this->RewardGOLD = 0;
    this->RewardCostId = 0;
    this->RewardCostCount = 0;
    this->RewardItem01Count = 0;
    this->RewardItem02Count = 0;
    this->TutorialGroupId = 0;
    this->ContentOpenPage = 0;
    this->StringMESSAGE = 0;
}

