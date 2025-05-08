#include "MM_AutoBehaviorAIController.h"

AMM_AutoBehaviorAIController::AMM_AutoBehaviorAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HasMoveInput = false;
    this->ReservedSkillID = 0;
}

void AMM_AutoBehaviorAIController::SetAutoBehaviorAction() {
}

bool AMM_AutoBehaviorAIController::SearchTarget() {
    return false;
}

bool AMM_AutoBehaviorAIController::SearchQuestTargetID() {
    return false;
}

bool AMM_AutoBehaviorAIController::SearchQuestTargetGroupID() {
    return false;
}

bool AMM_AutoBehaviorAIController::SearchQuestTargetGrade() {
    return false;
}

bool AMM_AutoBehaviorAIController::SearchQuestTargetAroundNPC() {
    return false;
}

bool AMM_AutoBehaviorAIController::SearchQuestTarget() {
    return false;
}

bool AMM_AutoBehaviorAIController::SearchQuestAnyTarget() {
    return false;
}

bool AMM_AutoBehaviorAIController::SearchGather() {
    return false;
}

bool AMM_AutoBehaviorAIController::ReturnToCenter() {
    return false;
}

void AMM_AutoBehaviorAIController::ResetExceptSkillData() {
}

void AMM_AutoBehaviorAIController::ResetDelayTime() {
}

void AMM_AutoBehaviorAIController::NormalAttack() {
}

bool AMM_AutoBehaviorAIController::IsTracing() {
    return false;
}

bool AMM_AutoBehaviorAIController::IsSetTargetObject() {
    return false;
}

bool AMM_AutoBehaviorAIController::IsSetTargetCharacter() {
    return false;
}

bool AMM_AutoBehaviorAIController::IsOperating() {
    return false;
}

bool AMM_AutoBehaviorAIController::IsInQuestCompleteZone() const {
    return false;
}

bool AMM_AutoBehaviorAIController::IsAttacking() {
    return false;
}

void AMM_AutoBehaviorAIController::GatherObject() {
}

void AMM_AutoBehaviorAIController::ExcuteSmiteSkills() {
}

bool AMM_AutoBehaviorAIController::ExcuteSkill() {
    return false;
}

void AMM_AutoBehaviorAIController::ExceptSkillByTargetInDistance(int32 SkillID, float Distance) {
}

void AMM_AutoBehaviorAIController::ExceptSkillByOverHP(int32 SkillID, float Rate) {
}

void AMM_AutoBehaviorAIController::ExceptSkillByNoEnemyInDistance(int32 SkillID, float Distance) {
}

void AMM_AutoBehaviorAIController::ExceptSkillByLessMP(int32 SkillID, float Rate) {
}

void AMM_AutoBehaviorAIController::ExceptSkillByLessHP(int32 SkillID, float Rate) {
}

void AMM_AutoBehaviorAIController::ExceptSkillByHasBuff(int32 SkillID, int32 BuffId) {
}

void AMM_AutoBehaviorAIController::ExceptSkillByEnemyInDistance(int32 SkillID, float Distance) {
}

bool AMM_AutoBehaviorAIController::CheckSmiteSkillByRate(float Rate) {
    return false;
}

void AMM_AutoBehaviorAIController::CheckSelectTarget() {
}

void AMM_AutoBehaviorAIController::CheckReturnDist() {
}

bool AMM_AutoBehaviorAIController::CheckOnSmiteSkills() {
    return false;
}

bool AMM_AutoBehaviorAIController::CheckCanSkill() {
    return false;
}

void AMM_AutoBehaviorAIController::CheckAutoCounterTarget() {
}

bool AMM_AutoBehaviorAIController::CanSkillByTargetOverDistance(int32 SkillID, float Distance, float Rate) {
    return false;
}

bool AMM_AutoBehaviorAIController::CanSkillByTargetInDistance(int32 SkillID, float Distance, float Rate) {
    return false;
}

bool AMM_AutoBehaviorAIController::CanSkillByRateOverHP(int32 SkillID, float hpPercent, float Rate) {
    return false;
}

bool AMM_AutoBehaviorAIController::CanSkillByRateNoBuff(int32 SkillID, int32 BuffId, float Rate) {
    return false;
}

bool AMM_AutoBehaviorAIController::CanSkillByRateLessHP(int32 SkillID, float hpPercent, float Rate) {
    return false;
}

bool AMM_AutoBehaviorAIController::CanSkillByRate(int32 SkillID, float Rate) {
    return false;
}

bool AMM_AutoBehaviorAIController::CanSkillByDeadPartyMember(int32 SkillID, float Distance) {
    return false;
}


