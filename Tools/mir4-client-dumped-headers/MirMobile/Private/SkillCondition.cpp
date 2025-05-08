#include "SkillCondition.h"

FSkillCondition::FSkillCondition() {
    this->ConditionType = EConditionType::None;
    this->EnableConditionTarget = false;
    this->ConditionTarget = EConditionTarget::Me;
    this->EnableConditionValue = false;
    this->ConditionValue = 0;
    this->ExecutionProbability = 0;
    this->SkillID = 0;
}

