#include "MM_AIControllerBase.h"

AMM_AIControllerBase::AMM_AIControllerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bWantsPlayerState = true;
}

bool AMM_AIControllerBase::WarpToLocation(FVector vPos) {
    return false;
}

bool AMM_AIControllerBase::WarpToChar(AMM_CharacterPawnBase* pCharBase) {
    return false;
}

bool AMM_AIControllerBase::TraceTarget(AMM_CharacterPawnBase* pTargetChar) {
    return false;
}

bool AMM_AIControllerBase::TraceDirTarget(AMM_CharacterPawnBase* pTargetChar, float Distance, float Angle) {
    return false;
}

bool AMM_AIControllerBase::ToggleCharShow(AMM_CharacterPawnBase* pCharBase, bool bShow) {
    return false;
}

bool AMM_AIControllerBase::SummonMonster(int32 nMonTID, FVector vLoc, float RangeMax, float RangeMin, int32 Num) {
    return false;
}

bool AMM_AIControllerBase::Suicide(bool bDyingAni) {
    return false;
}

bool AMM_AIControllerBase::StopMoving() {
    return false;
}

bool AMM_AIControllerBase::SpawnEffect(FName ParticleName, FName BoneName) {
    return false;
}

void AMM_AIControllerBase::SetTarget(AMM_CharacterPawnBase* pCharBase) {
}

void AMM_AIControllerBase::SetEnemyTarget(AMM_CharacterPawnBase* pCharBase) {
}

void AMM_AIControllerBase::SearchTargets(bool bAggressive) {
}

AMM_CharacterPawnBase* AMM_AIControllerBase::SearchCharacter(ECharacterType eCharType, TARGET_TYPE eTargetType, DISTANCE_TYPE eDistType) {
    return NULL;
}

bool AMM_AIControllerBase::RunAway(float fDist) {
    return false;
}

bool AMM_AIControllerBase::RemoveEffect(FName ParticleName) {
    return false;
}

bool AMM_AIControllerBase::PlayAni(int32 nEmotionID) {
    return false;
}

bool AMM_AIControllerBase::Patrol() {
    return false;
}

bool AMM_AIControllerBase::NoticeMsg(int32 MessageID, E_NOTICE_TARGET eType) {
    return false;
}

bool AMM_AIControllerBase::MoveToDest(FVector vDestPos) {
    return false;
}

bool AMM_AIControllerBase::KillTotem(int32 nTotemTID) {
    return false;
}

bool AMM_AIControllerBase::KillMonster(int32 nMonTID) {
    return false;
}

bool AMM_AIControllerBase::IsDead(AMM_CharacterPawnBase* pCharBase) {
    return false;
}

bool AMM_AIControllerBase::IsCloseToPos(FVector vPos, float fCheckDist) {
    return false;
}

bool AMM_AIControllerBase::IsCloseToChar(const AMM_CharacterPawnBase* pChar, float fCheckDist) {
    return false;
}

bool AMM_AIControllerBase::HealTarget(int32 nHealValue) {
    return false;
}

E_CARDINALPOINTS AMM_AIControllerBase::GetDirectionFromMe(const AMM_CharacterPawnBase* pChar, float Angle) {
    return E_CARDINALPOINTS::None;
}

int32 AMM_AIControllerBase::GetAttackID(bool bLongAttack) {
    return 0;
}

bool AMM_AIControllerBase::GenTotem(AMM_CharacterPawnBase* pCharBase, int32 nTotemID, const FVector& Loc) {
    return false;
}

bool AMM_AIControllerBase::DelBuffFromChar(AMM_CharacterPawnBase* pCharBase, int32 nBuffTID) {
    return false;
}

int32 AMM_AIControllerBase::CompareDistance(const AMM_CharacterPawnBase* pCharA, const AMM_CharacterPawnBase* pCharB) {
    return 0;
}

bool AMM_AIControllerBase::AttackTarget(int32 nAttackTID) {
    return false;
}

bool AMM_AIControllerBase::AddBuffToChar(AMM_CharacterPawnBase* pCharBase, int32 nBuffTID) {
    return false;
}


