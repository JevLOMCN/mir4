#include "QuestRelationTemplate.h"

FQuestRelationTemplate::FQuestRelationTemplate() {
    this->RelationId = 0;
    this->RelationCategory = 0;
    this->RelationMenuName = 0;
    this->RelationMenuIcon = 0;
    this->RelationListHide = 0;
    this->RelationQuestStep = 0;
    this->RelationQuestGrade = 0;
    this->RelationViewType = 0;
    this->RelationTitleSID = 0;
    this->RelationQuestInfoSID = 0;
    this->RelationCompleteInfoSID = 0;
    this->MissionType = QuestMissionType::None;
    this->MissionTarget = 0;
    this->Parameter1 = 0;
    this->Parameter2 = 0;
    this->Parameter3 = 0;
    this->MissionStageId = 0;
    this->EffectId = 0;
    this->RewardType = 0;
    this->RewardExp = 0;
    this->RewardGOLD = 0;
    this->RewardGoodsType = 0;
    this->RewardGoodsCount = 0;
    this->RewardItemCount01 = 0;
    this->RewardItemCount02 = 0;
    this->MissionInfoSID = 0;
    this->MissionCountShow = 0;
}

