#include "MM_CheatWidget.h"

UMM_CheatWidget::UMM_CheatWidget() : UUserWidget(FObjectInitializer::Get()) {
}

void UMM_CheatWidget::ValueCheatConfirm(int32 CheatIndex, int32 CheatValue1, int32 CheatValue2) {
}

void UMM_CheatWidget::ToggleSkeletalMeshTickEnable() {
}

void UMM_CheatWidget::ToggleQuestRange() {
}

void UMM_CheatWidget::ToggleNameTag() {
}

void UMM_CheatWidget::ToggleBattleUI() {
}

void UMM_CheatWidget::ToggleBattleEffect() {
}

void UMM_CheatWidget::ToggelVoltageMode() {
}

void UMM_CheatWidget::ShowServerBlock(bool bShow) {
}

void UMM_CheatWidget::SetAutoStageEnter() {
}

bool UMM_CheatWidget::ScreenShotTest(FString& FilePath) {
    return false;
}

void UMM_CheatWidget::OnWarpStageLocation(int32 StageId, FVector WarpLocation) {
}

void UMM_CheatWidget::OnWarpQuestLocation(int32 QuestId) {
}

void UMM_CheatWidget::OnWarpLocation(FVector WarpLocation) {
}

void UMM_CheatWidget::OnWarpCurrentQuestLocation() {
}

void UMM_CheatWidget::OnWarpCheate(int32 WarpId) {
}

void UMM_CheatWidget::OnResetQuest(int32 QuestId) {
}

void UMM_CheatWidget::OnResetPrevQuest(TArray<int32> QuestIDArray, ECheatSuccessOrFail& OutResult) {
}

void UMM_CheatWidget::OnQuestMoveAndTake(int32 QuestId) {
}

void UMM_CheatWidget::OnOffCheatConfirm(int32 CheatIndex) {
}

void UMM_CheatWidget::LoadCharacterSelectLevel() {
}

void UMM_CheatWidget::GetMirCurrentTime(int32& CurrentWeek, int32& CurrentHour, int32& CurrentMin, int32& CurrentSec) {
}

int32 UMM_CheatWidget::GetMainPCStatValue(int32 StatID) {
    return 0;
}

FString UMM_CheatWidget::GetCombineQuestMission(const FString& missionStr, int32 StepNo) {
    return TEXT("");
}

void UMM_CheatWidget::CheatPassMainQuest() {
}

void UMM_CheatWidget::CheatMakeItem(int32 ItemId, int32 ItemCount) {
}


