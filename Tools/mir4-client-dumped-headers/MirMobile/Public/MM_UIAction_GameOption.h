#pragma once
#include "CoreMinimal.h"
#include "EGameOptionType.h"
#include "MM_UIAction.h"
#include "MM_UIAction_GameOption.generated.h"

UCLASS(Blueprintable)
class UMM_UIAction_GameOption : public UMM_UIAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> TempGameOptionMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EGameOptionType, int32> GameoptionMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EGameOptionType, int32> OSMaxGrapicOptionMap;
    
public:
    UMM_UIAction_GameOption();

private:
    UFUNCTION(BlueprintCallable)
    void OnVoiceVolume(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnVisual(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnUserNameOption(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnUnSleepModeWhenAttacked(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnTexture(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnSleepModeStartTime(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnSkillEffect(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnSimple(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnShadow(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnSFXVolume(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnScreenEffect(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnResolution(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnQuickSlotInvenSort(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnQuickSlotInvenOrder(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnQuickSlotAutoPotion_2(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnQuickSlotAutoPotion_1(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnQuickSlotAutoPotion_0(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnQuickSlotAutoEquip(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnPet(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnPartyUIAutoVisible(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnPartyBattleTargetShare(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnOtherGuildMark(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnOneStoreLogoutComplete(bool Success, const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    void OnMyNameOption(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnMyGuildMark(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnMyAllianceGuildMark(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnMonNameOption(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnMasterVolume(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnLinkIDPComplete(bool Success, const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    void OnLeaderCenteredBattle(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnHUDAutoResizing(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnGuestPWChangeComplete(bool Success, const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    void OnFrameSpeed(int32 Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnEmergencyEscape();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEffectVisual(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnCostumeTitleOption(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnComplateQuestSort(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnChattingRenderOpacity(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnCameraShakeScale(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnCameraMode(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnBuddyRequestAutoReject(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnBuddyLoginNotice(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnBGMVolume(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnAutoSkill(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnAutoReturnOnDeath(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnAutoPotionMpPercent(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnAutoPotionHpPercent(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnAutoPlayUseSkill(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnAutoLockOn(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnAutoCounterAttack(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnAutoBattleRange(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnAutoBattleFunction(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnARejectSquad(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnARejectParty(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnAmbientVolume(int32 Value);
    
};

