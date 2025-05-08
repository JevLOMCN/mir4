#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstance -FallbackName=GameInstance
#include "ATTACK_DATA.h"
#include "CharStatistics.h"
#include "EFSM_TYPE.h"
#include "EPrerequisiteLoadState.h"
#include "MM_GameInstance.generated.h"

class AMM_GameModeBase;
class AMM_HUDBase;
class AMM_MainPC;
class AMM_PlayerController;
class AMM_SoundManagerActor;
class ASkeletalMeshActor;
class AStaticMeshActor;
class UAccountLocalSave;
class UCharLocalSave;
class UDataTable;
class UFootStepSurfaceData;
class UGameDefineDataAsset;
class UHttpImageManager;
class UInAppPurchaseBackupData;
class UInAppPurchaseData;
class ULevelStreamingDynamic;
class UMM_AdManager;
class UMM_CinematicManager;
class UMM_CustomizingManager;
class UMM_EffectManager;
class UMM_IAPManager;
class UMM_LoginManager;
class UMM_MultiClientSupporter;
class UMM_PoolManager;
class UMM_ScheduleManager;
class UMM_TemplateManager;
class UMM_UIActionManager;
class UMM_UnCheater;
class UMM_WarpMoveManager;
class UMM_WidgetManager;
class UMirColorData;
class UObject;
class UParticleSystemComponent;
class UWNFreeStopHingeModule;

UCLASS(Blueprintable, NonTransient)
class MIRMOBILE_API UMM_GameInstance : public UGameInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMM_PlayerController* m_pPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString m_strServerInfoJson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bUseWemadeServiceLogin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bPatched;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bLoadedShaderLibraryAndPSO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMM_CustomizingManager* m_pCustomizingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMM_PoolManager* m_pPoolManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMM_WidgetManager* m_pWidgetManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMM_TemplateManager* m_pTemplateManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMM_CinematicManager* m_pCinematicManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMM_WarpMoveManager* WarpMoveManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMM_LoginManager* m_pLoginManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMM_IAPManager* m_pIAPManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMM_AdManager* m_pAdManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMM_SoundManagerActor* m_pSoundManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMM_EffectManager* EffectManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMM_UIActionManager* m_pUIActionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHttpImageManager* m_pHttpImageManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMM_ScheduleManager* m_pScheduleManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCharStatistics m_MainPCData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGameDefineDataAsset* m_pGameDefineData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMirColorData* m_pMirColorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFootStepSurfaceData* m_pFootStepSurfaceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* m_pDefaultNavigationFilterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* m_pIgnoreCostNavigationFilterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* m_pLinkProxyNavigationFilterClass;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPrerequisiteLoadState, bool> m_mapPrerequisiteLoadState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* m_RichTextStyleTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAccountLocalSave* m_pAccountLocalSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCharLocalSave* m_pCharLocalSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInAppPurchaseData* m_pInAppPurchaseLocalSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInAppPurchaseBackupData* m_pInAppPurchaseBackupLocalSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AMM_HUDBase> m_pMirHudBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bRideState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bAvailableRide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bNeedCheckAndroidPermission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMM_GameModeBase* m_pMMGameModeBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iStageID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iPreStageID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bPvPEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bLevelStreaming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bMapLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bException_LogoToCharSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> m_arLoadedLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelStreamingDynamic* m_pLevelStreamingKismet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelStreamingDynamic* m_pTriggerStreamingKismet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelStreamingDynamic* m_pLevelStreamingKismet_Logo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bFastLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bLoadLevelInstance;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMM_MainPC* pMainPC;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASkeletalMeshActor*> m_PSOCacheSkeletalMeshActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AStaticMeshActor*> m_PSOCacheStaticMeshActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystemComponent*> m_PSOCacheParticleComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWNFreeStopHingeModule* FreeStopHingeModule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMM_UnCheater* m_UnCheater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMM_MultiClientSupporter* m_MultiClientSupporter;
    
public:
    UMM_GameInstance();

    UFUNCTION(BlueprintCallable, Exec)
    void UnsealRegisterAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnsealGet();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnsealCompleteAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnsealAccelAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void unlockcontents(int32 ContentsId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnInitGME();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TutorialHighLight(FName TargetIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TogglePhaseMode(int32 nPhaseTID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleHud(int32 hudid);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleEncrypt(int32 Mode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestWithdraw();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestWarp();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestTutorial(int32 TutorialGroupId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestSend(int32 Param);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestGME();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestAd();
    
    UFUNCTION(BlueprintCallable, Exec)
    void test_gm_msg_stop();
    
    UFUNCTION(BlueprintCallable, Exec)
    void test_gm_msg(const FString& strMsg, int32 iDuration);
    
private:
    UFUNCTION(BlueprintCallable)
    void SuccessLogout();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void StunChar(int32 ID, int32 Time);
    
    UFUNCTION(BlueprintCallable, Exec)
    void StrongPointNotice(int32 strongPointTID, int32 noticeType);
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartPSOCache();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SiegeObserver(bool isOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowStat(int32 uid);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowSmallTalkWidget(int32 iDialogueID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowRevivalWidget();
    
    UFUNCTION(BlueprintCallable, Exec)
    void showray();
    
    UFUNCTION(BlueprintCallable, Exec)
    void shownametag();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowMainQuestLog();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowLoadedBrushCount();
    
    UFUNCTION(BlueprintCallable, Exec)
    void showDamageInfo(int32 monsterTID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void showattackrange(int32 ID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowAllDungeon(int32 Show);
    
    UFUNCTION(BlueprintCallable, Exec)
    void shadow(int32 shadowStep);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetWSEventListSkip(bool bUse);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetQuestLog(bool State);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPhaseDelay();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPassiveCoolTime(int32 sec);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetHideFlag(const FString& strHideType);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCustomSafePadding(const FString& InData);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAttackOnce(int32 Mode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAttackIndex(int32 idx, int32 ID, bool bLongAttack);
    
    UFUNCTION(Exec)
    void SetAssassin(uint64 uid, bool bOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RotChar(int32 ID, int32 nAngle);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResumeAI(int32 ID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RelationScript(const FString& CommandScript);
    
    UFUNCTION(BlueprintCallable, Exec)
    void queststart(int32 ID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void questend(int32 ID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlayCutscene(int32 NameId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PhaseGod(bool bGod);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PCTeleport(float X, float Y, float Z);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PauseAI(int32 ID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void OpenWebURL(const FString& strURL);
    
    UFUNCTION(BlueprintCallable, Exec)
    void OpenIndividualStorage();
    
    UFUNCTION(BlueprintCallable, Exec)
    void OpenHUDBtn();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUnloadStreamLevelEnded();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void OnSleepMode();
    
    UFUNCTION(BlueprintCallable, Exec)
    void onskill(int32 SkillID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void OnPKMode();
    
    UFUNCTION(BlueprintCallable)
    void OnParticleSystemFinished(UParticleSystemComponent* FinishedComponent);
    
    UFUNCTION(BlueprintCallable, Exec)
    void OnMirDebug();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLoadTriggerLevel();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadNextMap();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadLevelInstanceEnded();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadGraphicLevel();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelStreamingProgress(const int32 iProcessed, const int32 iTotal);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelStreamingCompletion();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void OnLapidifiCation(int32 materialType, float Time);
    
    UFUNCTION(BlueprintCallable)
    void OnClickQuitPopupCancelButton();
    
    UFUNCTION(BlueprintCallable, Exec)
    void MOVIEPLAY(int32 ID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void movebuff(int32 BuffValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MirScript(const FString& CommandScript);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MessageShowRequest(int32 iMSTR_ID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void lod(int32 lodStep);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULevelStreamingDynamic* LoadLevelInstance(const FString& LevelName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void JPRO_TEST();
    
    UFUNCTION(BlueprintCallable, Exec)
    void JPRO_REFUND_TEST();
    
    UFUNCTION(BlueprintCallable, Exec)
    void JPRO_RECONNECT_TEST();
    
    UFUNCTION(BlueprintCallable, Exec)
    void JPRO_CONTENTS_LOCK_TEST(int32 iContentsID, int32 iLock);
    
    UFUNCTION(BlueprintCallable, Exec)
    void InitialEntryTutorial(int32 TutorialGroupId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void InitGME();
    
    UFUNCTION(BlueprintCallable, Exec)
    void hudon();
    
    UFUNCTION(BlueprintCallable, Exec)
    void hudoff();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GuildBlackIronTakeOut();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetActiveProfileName();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GenTotem(int32 ID, int32 Distance);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GenMonster(int32 ID, int32 Distance);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GenFixedNpc(int32 ID, int32 Distance);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GenBotPC(int32 nCount, int32 Distance);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GenBotNpc(int32 ID, int32 Distance);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GenBotMon(int32 ID, int32 nCount, int32 Distance);
    
    UFUNCTION(BlueprintCallable)
    void ForcedQuitGame();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FakeObject(bool Show);
    
private:
    UFUNCTION(BlueprintCallable)
    void ExcuteLogout_ReturnToLogin();
    
    UFUNCTION(BlueprintCallable)
    void ExcuteLogout_MoveToCharSelect();
    
public:
    UFUNCTION(Exec)
    void EnterMagicSquare(uint32 squareID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EndOffLine();
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableBuildingStepUp(bool State);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DrawRectangleRange(float DrawRange, float DrawTime);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DrawPlayerRectangleRange(float DrawRange);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DrawPlayerCircleRange(float DrawRange);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DrawCircleRange(float DrawRange, float DrawTime);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DominionOpenTabAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DominionAuthAll(bool bUse);
    
    UFUNCTION(BlueprintCallable)
    void DoInitializeAdjust();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisconnectServer(int32 iDisconnectReason);
    
    UFUNCTION(BlueprintCallable, Exec)
    void deviceviewportsize();
    
    UFUNCTION(BlueprintCallable, Exec)
    void crash();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ContentsLock(int32 iContentsID, int32 iLock, int32 iTableID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CinematicDialogueAll(int32 DialogueID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CinematicDialogue(int32 DialogueID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheckTable_ICON();
    
    UFUNCTION(BlueprintCallable, Exec)
    void cheatmsg(const FString& msg);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangeSyncTime(int32 Year, int32 mon, int32 Day, int32 Hour, int32 Min, int32 sec);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangeServer(const FString& ServiceVersion);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangePCFSM(EFSM_TYPE FSMType, int32 param01);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangePC(int32 pcindex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangeDeviceState();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float CalculateAttackDamage(FATTACK_DATA ATTACK_DATA);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AutoRebirth(int32 isOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AutoPartyZone(int32 isOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void autogather();
    
    UFUNCTION(BlueprintCallable, Exec)
    void autobattlegather();
    
    UFUNCTION(BlueprintCallable, Exec)
    void autobattle();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AuctionSendRegisterAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AuctionSendCancelAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AuctionSellTimeZero();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AuctionAddItemAll();
    
};

