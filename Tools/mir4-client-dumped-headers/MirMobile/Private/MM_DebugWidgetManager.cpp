#include "MM_DebugWidgetManager.h"

AMM_DebugWidgetManager::AMM_DebugWidgetManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AMM_DebugWidgetManager::GetNpcState(AMM_NetPC* pNetPC, int32& uid, int32& HP, int32& VehicleId, bool& bRide, FString& CurrentFSM) const {
}

void AMM_DebugWidgetManager::GetMonsterState(AMM_Monster* pMonster, FString& uid, FString& TID, FString& Grade, FString& CP, FString& HP, FString& Att, FString& Def, FString& Accm, FString& BT, FString& CurrentFSM, FString& PrevFSM) const {
}

void AMM_DebugWidgetManager::GetMonsterSimpleState(AMM_Monster* pMonster, FString& PhysicalAttack, FString& MagicAttack, FString& Physicaldefense, FString& Magicdefense) const {
}

void AMM_DebugWidgetManager::GetMainpcState(FVector& Loc, bool& bRide, FString& CurrentFSM, int32& MoveSpeed) const {
}

void AMM_DebugWidgetManager::GetMainPCStat(FString& PhysicalAttack, FString& MagicAttack, FString& Physicaldefense, FString& Magicdefense) const {
}


