#pragma once
#include "CoreMinimal.h"
#include "MM_GameModeBase.h"
#include "MM_CutscenePreviewGameMode.generated.h"

class UDataTable;
class ULevelStreamingDynamic;

UCLASS(Blueprintable, NonTransient)
class AMM_CutscenePreviewGameMode : public AMM_GameModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelStreamingDynamic* m_pLevelStreaming;
    
    AMM_CutscenePreviewGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTestPlayerClassID(int32 ClassID);
    
    UFUNCTION(BlueprintCallable)
    void PlayCutscene(bool bCinematic, int32 CutsceneID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishCutsceneEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishCutscene();
    
    UFUNCTION(BlueprintCallable)
    void GetRequestQuestCinematicData(TArray<int32>& QuestIDArray, TArray<FString>& QuestTitleArray, TArray<int32>& StageIDArray, TArray<int32>& CinematicIDArray);
    
    UFUNCTION(BlueprintCallable)
    void GetRelationCinematicData(TArray<int32>& QuestIDArray, TArray<FString>& QuestTitleArray, TArray<int32>& StageIDArray, TArray<int32>& CinematicIDArray);
    
    UFUNCTION(BlueprintCallable)
    void GetMissionCinematicData(TArray<int32>& QuestIDArray, TArray<FString>& QuestTitleArray, TArray<int32>& StageIDArray, TArray<int32>& CinematicIDArray);
    
    UFUNCTION(BlueprintCallable)
    void GetMainQusetPhasingMission(UDataTable* pQuestData, FName QuestRowName, bool& bPhasingMission, TArray<int32>& CinematicIDArray, TArray<int32>& SequenceIDArray);
    
};

