#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "ECheatSuccessOrFail.h"
#include "MM_CheatWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMM_CheatWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UMM_CheatWidget();

    UFUNCTION(BlueprintCallable)
    void ValueCheatConfirm(int32 CheatIndex, int32 CheatValue1, int32 CheatValue2);
    
    UFUNCTION(BlueprintCallable)
    void ToggleSkeletalMeshTickEnable();
    
    UFUNCTION(BlueprintCallable)
    void ToggleQuestRange();
    
    UFUNCTION(BlueprintCallable)
    void ToggleNameTag();
    
    UFUNCTION(BlueprintCallable)
    void ToggleBattleUI();
    
    UFUNCTION(BlueprintCallable)
    void ToggleBattleEffect();
    
    UFUNCTION(BlueprintCallable)
    void ToggelVoltageMode();
    
    UFUNCTION(BlueprintCallable)
    void ShowServerBlock(bool bShow);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoStageEnter();
    
    UFUNCTION(BlueprintCallable)
    bool ScreenShotTest(FString& FilePath);
    
    UFUNCTION(BlueprintCallable)
    void OnWarpStageLocation(int32 StageId, FVector WarpLocation);
    
    UFUNCTION(BlueprintCallable)
    void OnWarpQuestLocation(int32 QuestId);
    
    UFUNCTION(BlueprintCallable)
    void OnWarpLocation(FVector WarpLocation);
    
    UFUNCTION(BlueprintCallable)
    void OnWarpCurrentQuestLocation();
    
    UFUNCTION(BlueprintCallable)
    void OnWarpCheate(int32 WarpId);
    
    UFUNCTION(BlueprintCallable)
    void OnResetQuest(int32 QuestId);
    
    UFUNCTION(BlueprintCallable)
    void OnResetPrevQuest(TArray<int32> QuestIDArray, ECheatSuccessOrFail& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void OnQuestMoveAndTake(int32 QuestId);
    
    UFUNCTION(BlueprintCallable)
    void OnOffCheatConfirm(int32 CheatIndex);
    
    UFUNCTION(BlueprintCallable)
    void LoadCharacterSelectLevel();
    
    UFUNCTION(BlueprintCallable)
    void GetMirCurrentTime(int32& CurrentWeek, int32& CurrentHour, int32& CurrentMin, int32& CurrentSec);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMainPCStatValue(int32 StatID);
    
    UFUNCTION(BlueprintCallable)
    FString GetCombineQuestMission(const FString& missionStr, int32 StepNo);
    
    UFUNCTION(BlueprintCallable)
    void CheatPassMainQuest();
    
    UFUNCTION(BlueprintCallable)
    void CheatMakeItem(int32 ItemId, int32 ItemCount);
    
};

