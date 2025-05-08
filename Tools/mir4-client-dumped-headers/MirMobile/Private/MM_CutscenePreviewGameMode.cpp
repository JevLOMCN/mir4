#include "MM_CutscenePreviewGameMode.h"

AMM_CutscenePreviewGameMode::AMM_CutscenePreviewGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_pLevelStreaming = NULL;
}

void AMM_CutscenePreviewGameMode::SetTestPlayerClassID(int32 ClassID) {
}

void AMM_CutscenePreviewGameMode::PlayCutscene(bool bCinematic, int32 CutsceneID) {
}


void AMM_CutscenePreviewGameMode::OnFinishCutscene() {
}

void AMM_CutscenePreviewGameMode::GetRequestQuestCinematicData(TArray<int32>& QuestIDArray, TArray<FString>& QuestTitleArray, TArray<int32>& StageIDArray, TArray<int32>& CinematicIDArray) {
}

void AMM_CutscenePreviewGameMode::GetRelationCinematicData(TArray<int32>& QuestIDArray, TArray<FString>& QuestTitleArray, TArray<int32>& StageIDArray, TArray<int32>& CinematicIDArray) {
}

void AMM_CutscenePreviewGameMode::GetMissionCinematicData(TArray<int32>& QuestIDArray, TArray<FString>& QuestTitleArray, TArray<int32>& StageIDArray, TArray<int32>& CinematicIDArray) {
}

void AMM_CutscenePreviewGameMode::GetMainQusetPhasingMission(UDataTable* pQuestData, FName QuestRowName, bool& bPhasingMission, TArray<int32>& CinematicIDArray, TArray<int32>& SequenceIDArray) {
}


