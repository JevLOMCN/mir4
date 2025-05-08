#include "MM_GameInstance.h"

UMM_GameInstance::UMM_GameInstance() {
    this->m_pPlayerController = NULL;
    this->m_bUseWemadeServiceLogin = false;
    this->m_bPatched = false;
    this->m_bLoadedShaderLibraryAndPSO = false;
    this->m_pCustomizingManager = NULL;
    this->m_pPoolManager = NULL;
    this->m_pWidgetManager = NULL;
    this->m_pTemplateManager = NULL;
    this->m_pCinematicManager = NULL;
    this->WarpMoveManager = NULL;
    this->m_pLoginManager = NULL;
    this->m_pIAPManager = NULL;
    this->m_pAdManager = NULL;
    this->m_pSoundManager = NULL;
    this->EffectManager = NULL;
    this->m_pUIActionManager = NULL;
    this->m_pHttpImageManager = NULL;
    this->m_pScheduleManager = NULL;
    this->m_pGameDefineData = NULL;
    this->m_pMirColorData = NULL;
    this->m_pFootStepSurfaceData = NULL;
    this->m_pDefaultNavigationFilterClass = NULL;
    this->m_pIgnoreCostNavigationFilterClass = NULL;
    this->m_pLinkProxyNavigationFilterClass = NULL;
    this->m_RichTextStyleTable = NULL;
    this->m_pAccountLocalSave = NULL;
    this->m_pCharLocalSave = NULL;
    this->m_pInAppPurchaseLocalSave = NULL;
    this->m_pInAppPurchaseBackupLocalSave = NULL;
    this->m_bRideState = false;
    this->m_bAvailableRide = true;
    this->m_bNeedCheckAndroidPermission = false;
    this->m_pMMGameModeBase = NULL;
    this->m_iStageID = 0;
    this->m_iPreStageID = 0;
    this->m_bPvPEnable = true;
    this->m_bLevelStreaming = false;
    this->m_bMapLoading = false;
    this->m_bException_LogoToCharSelect = false;
    this->m_pLevelStreamingKismet = NULL;
    this->m_pTriggerStreamingKismet = NULL;
    this->m_pLevelStreamingKismet_Logo = NULL;
    this->m_bFastLoading = false;
    this->m_bLoadLevelInstance = false;
    this->pMainPC = NULL;
    this->FreeStopHingeModule = NULL;
    this->m_UnCheater = NULL;
    this->m_MultiClientSupporter = NULL;
}

void UMM_GameInstance::UnsealRegisterAll() {
}

void UMM_GameInstance::UnsealGet() {
}

void UMM_GameInstance::UnsealCompleteAll() {
}

void UMM_GameInstance::UnsealAccelAll() {
}

void UMM_GameInstance::unlockcontents(int32 ContentsId) {
}

void UMM_GameInstance::UnInitGME() {
}

void UMM_GameInstance::TutorialHighLight(FName TargetIndex) {
}

void UMM_GameInstance::TogglePhaseMode(int32 nPhaseTID) {
}

void UMM_GameInstance::ToggleHud(int32 hudid) {
}

void UMM_GameInstance::ToggleEncrypt(int32 Mode) {
}

void UMM_GameInstance::TestWithdraw() {
}

void UMM_GameInstance::TestWarp() {
}

void UMM_GameInstance::TestTutorial(int32 TutorialGroupId) {
}

void UMM_GameInstance::TestSend(int32 Param) {
}

void UMM_GameInstance::TestGME() {
}

void UMM_GameInstance::TestAd() {
}

void UMM_GameInstance::test_gm_msg_stop() {
}

void UMM_GameInstance::test_gm_msg(const FString& strMsg, int32 iDuration) {
}

void UMM_GameInstance::SuccessLogout() {
}

void UMM_GameInstance::StunChar(int32 ID, int32 Time) {
}

void UMM_GameInstance::StrongPointNotice(int32 strongPointTID, int32 noticeType) {
}

void UMM_GameInstance::StartPSOCache() {
}

void UMM_GameInstance::SiegeObserver(bool isOn) {
}

void UMM_GameInstance::ShowStat(int32 uid) {
}

void UMM_GameInstance::ShowSmallTalkWidget(int32 iDialogueID) {
}

void UMM_GameInstance::ShowRevivalWidget() {
}

void UMM_GameInstance::showray() {
}

void UMM_GameInstance::shownametag() {
}

void UMM_GameInstance::ShowMainQuestLog() {
}

void UMM_GameInstance::ShowLoadedBrushCount() {
}

void UMM_GameInstance::showDamageInfo(int32 monsterTID) {
}

void UMM_GameInstance::showattackrange(int32 ID) {
}

void UMM_GameInstance::ShowAllDungeon(int32 Show) {
}

void UMM_GameInstance::shadow(int32 shadowStep) {
}

void UMM_GameInstance::SetWSEventListSkip(bool bUse) {
}

void UMM_GameInstance::SetQuestLog(bool State) {
}

void UMM_GameInstance::SetPhaseDelay() {
}

void UMM_GameInstance::SetPassiveCoolTime(int32 sec) {
}

void UMM_GameInstance::SetHideFlag(const FString& strHideType) {
}

void UMM_GameInstance::SetCustomSafePadding(const FString& InData) {
}

void UMM_GameInstance::SetAttackOnce(int32 Mode) {
}

void UMM_GameInstance::SetAttackIndex(int32 idx, int32 ID, bool bLongAttack) {
}

void UMM_GameInstance::SetAssassin(uint64 uid, bool bOn) {
}

void UMM_GameInstance::RotChar(int32 ID, int32 nAngle) {
}

void UMM_GameInstance::ResumeAI(int32 ID) {
}

void UMM_GameInstance::RelationScript(const FString& CommandScript) {
}

void UMM_GameInstance::queststart(int32 ID) {
}

void UMM_GameInstance::questend(int32 ID) {
}

void UMM_GameInstance::PlayCutscene(int32 NameId) {
}

void UMM_GameInstance::PhaseGod(bool bGod) {
}

void UMM_GameInstance::PCTeleport(float X, float Y, float Z) {
}

void UMM_GameInstance::PauseAI(int32 ID) {
}

void UMM_GameInstance::OpenWebURL(const FString& strURL) {
}

void UMM_GameInstance::OpenIndividualStorage() {
}

void UMM_GameInstance::OpenHUDBtn() {
}

void UMM_GameInstance::OnUnloadStreamLevelEnded() {
}

void UMM_GameInstance::OnSleepMode() {
}

void UMM_GameInstance::onskill(int32 SkillID) {
}

void UMM_GameInstance::OnPKMode() {
}

void UMM_GameInstance::OnParticleSystemFinished(UParticleSystemComponent* FinishedComponent) {
}

void UMM_GameInstance::OnMirDebug() {
}

void UMM_GameInstance::OnLoadTriggerLevel() {
}

void UMM_GameInstance::OnLoadNextMap() {
}

void UMM_GameInstance::OnLoadLevelInstanceEnded() {
}

void UMM_GameInstance::OnLoadGraphicLevel() {
}

void UMM_GameInstance::OnLevelStreamingProgress(const int32 iProcessed, const int32 iTotal) {
}

void UMM_GameInstance::OnLevelStreamingCompletion() {
}

void UMM_GameInstance::OnLapidifiCation(int32 materialType, float Time) {
}

void UMM_GameInstance::OnClickQuitPopupCancelButton() {
}

void UMM_GameInstance::MOVIEPLAY(int32 ID) {
}

void UMM_GameInstance::movebuff(int32 BuffValue) {
}

void UMM_GameInstance::MirScript(const FString& CommandScript) {
}

void UMM_GameInstance::MessageShowRequest(int32 iMSTR_ID) {
}

void UMM_GameInstance::lod(int32 lodStep) {
}

ULevelStreamingDynamic* UMM_GameInstance::LoadLevelInstance_Implementation(const FString& LevelName) {
    return NULL;
}

void UMM_GameInstance::JPRO_TEST() {
}

void UMM_GameInstance::JPRO_REFUND_TEST() {
}

void UMM_GameInstance::JPRO_RECONNECT_TEST() {
}

void UMM_GameInstance::JPRO_CONTENTS_LOCK_TEST(int32 iContentsID, int32 iLock) {
}

void UMM_GameInstance::InitialEntryTutorial(int32 TutorialGroupId) {
}

void UMM_GameInstance::InitGME() {
}

void UMM_GameInstance::hudon() {
}

void UMM_GameInstance::hudoff() {
}

void UMM_GameInstance::GuildBlackIronTakeOut() {
}

void UMM_GameInstance::GetActiveProfileName() {
}

void UMM_GameInstance::GenTotem(int32 ID, int32 Distance) {
}

void UMM_GameInstance::GenMonster(int32 ID, int32 Distance) {
}

void UMM_GameInstance::GenFixedNpc(int32 ID, int32 Distance) {
}

void UMM_GameInstance::GenBotPC(int32 nCount, int32 Distance) {
}

void UMM_GameInstance::GenBotNpc(int32 ID, int32 Distance) {
}

void UMM_GameInstance::GenBotMon(int32 ID, int32 nCount, int32 Distance) {
}

void UMM_GameInstance::ForcedQuitGame() {
}

void UMM_GameInstance::FakeObject(bool Show) {
}

void UMM_GameInstance::ExcuteLogout_ReturnToLogin() {
}

void UMM_GameInstance::ExcuteLogout_MoveToCharSelect() {
}

void UMM_GameInstance::EnterMagicSquare(uint32 squareID) {
}

void UMM_GameInstance::EndOffLine() {
}

void UMM_GameInstance::EnableBuildingStepUp(bool State) {
}

void UMM_GameInstance::DrawRectangleRange(float DrawRange, float DrawTime) {
}

void UMM_GameInstance::DrawPlayerRectangleRange(float DrawRange) {
}

void UMM_GameInstance::DrawPlayerCircleRange(float DrawRange) {
}

void UMM_GameInstance::DrawCircleRange(float DrawRange, float DrawTime) {
}

void UMM_GameInstance::DominionOpenTabAll() {
}

void UMM_GameInstance::DominionAuthAll(bool bUse) {
}

void UMM_GameInstance::DoInitializeAdjust() {
}

void UMM_GameInstance::DisconnectServer(int32 iDisconnectReason) {
}

void UMM_GameInstance::deviceviewportsize() {
}

void UMM_GameInstance::crash() {
}

void UMM_GameInstance::ContentsLock(int32 iContentsID, int32 iLock, int32 iTableID) {
}

void UMM_GameInstance::CinematicDialogueAll(int32 DialogueID) {
}

void UMM_GameInstance::CinematicDialogue(int32 DialogueID) {
}

void UMM_GameInstance::CheckTable_ICON() {
}

void UMM_GameInstance::cheatmsg(const FString& msg) {
}

void UMM_GameInstance::ChangeSyncTime(int32 Year, int32 mon, int32 Day, int32 Hour, int32 Min, int32 sec) {
}

void UMM_GameInstance::ChangeServer(const FString& ServiceVersion) {
}

void UMM_GameInstance::ChangePCFSM(EFSM_TYPE FSMType, int32 param01) {
}

void UMM_GameInstance::ChangePC(int32 pcindex) {
}

void UMM_GameInstance::ChangeDeviceState() {
}

float UMM_GameInstance::CalculateAttackDamage_Implementation(FATTACK_DATA ATTACK_DATA) {
    return 0.0f;
}

void UMM_GameInstance::AutoRebirth(int32 isOn) {
}

void UMM_GameInstance::AutoPartyZone(int32 isOn) {
}

void UMM_GameInstance::autogather() {
}

void UMM_GameInstance::autobattlegather() {
}

void UMM_GameInstance::autobattle() {
}

void UMM_GameInstance::AuctionSendRegisterAll() {
}

void UMM_GameInstance::AuctionSendCancelAll() {
}

void UMM_GameInstance::AuctionSellTimeZero() {
}

void UMM_GameInstance::AuctionAddItemAll() {
}


