#include "GuildCoopMissionTemplate.h"

FGuildCoopMissionTemplate::FGuildCoopMissionTemplate() {
    this->GuildCoopMissionId = 0;
    this->GuildCoopMissionGroupId = 0;
    this->Mission_Difficulty = 0;
    this->MissionIcon = 0;
    this->MissionTitle = 0;
    this->MissionObjective = 0;
    this->MissionType = QuestMissionType::None;
    this->MissionTarget = 0;
    this->Parameter1 = 0;
    this->Parameter2 = 0;
    this->ContentsOpenPage = 0;
    this->MissionStageId = 0;
    this->PcTargetSearchDist = 0;
    this->CoordinateRange = 0;
    this->AutoBattleType = 0;
    this->HelperType = QuestHelperType::NONE;
    this->StringMESSAGE = 0;
    this->MissionRewardType1 = 0;
    this->MissionRewardId1 = 0;
    this->MissionRewardCount1 = 0;
    this->MissionRewardType2 = 0;
    this->MissionRewardId2 = 0;
    this->MissionRewardCount2 = 0;
    this->MissionRewardType3 = 0;
    this->MissionRewardId3 = 0;
    this->MissionRewardCount3 = 0;
}

