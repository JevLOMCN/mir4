#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction.h"
#include "MM_UIAction_KeySetting.generated.h"

UCLASS(Blueprintable)
class MIRMOBILE_API UMM_UIAction_KeySetting : public UMM_UIAction {
    GENERATED_BODY()
public:
    UMM_UIAction_KeySetting();

    UFUNCTION(BlueprintCallable)
    void WallJumpReleased();
    
    UFUNCTION(BlueprintCallable)
    void WallJumpPressed();
    
    UFUNCTION(BlueprintCallable)
    void SpecialSkillReleased();
    
    UFUNCTION(BlueprintCallable)
    void SpecialSkillPressed();
    
    UFUNCTION(BlueprintCallable)
    void SlotChangeReleased();
    
    UFUNCTION(BlueprintCallable)
    void SlotChangePressed();
    
    UFUNCTION(BlueprintCallable)
    void SkillDeckChangeReleased();
    
    UFUNCTION(BlueprintCallable)
    void SkillDeckChangePressed();
    
    UFUNCTION(BlueprintCallable)
    void Skill06Released();
    
    UFUNCTION(BlueprintCallable)
    void Skill06Pressed();
    
    UFUNCTION(BlueprintCallable)
    void Skill05Released();
    
    UFUNCTION(BlueprintCallable)
    void Skill05Pressed();
    
    UFUNCTION(BlueprintCallable)
    void Skill04Released();
    
    UFUNCTION(BlueprintCallable)
    void Skill04Pressed();
    
    UFUNCTION(BlueprintCallable)
    void Skill03Released();
    
    UFUNCTION(BlueprintCallable)
    void Skill03Pressed();
    
    UFUNCTION(BlueprintCallable)
    void Skill02Released();
    
    UFUNCTION(BlueprintCallable)
    void Skill02Pressed();
    
    UFUNCTION(BlueprintCallable)
    void Skill01Released();
    
    UFUNCTION(BlueprintCallable)
    void Skill01Pressed();
    
    UFUNCTION(BlueprintCallable)
    void ShopReleased();
    
    UFUNCTION(BlueprintCallable)
    void ShopPressed();
    
    UFUNCTION(BlueprintCallable)
    void RideReleased();
    
    UFUNCTION(BlueprintCallable)
    void RidePressed();
    
    UFUNCTION(BlueprintCallable)
    void QuickSettingReleased();
    
    UFUNCTION(BlueprintCallable)
    void QuickSettingPressed();
    
    UFUNCTION(BlueprintCallable)
    void Quick03Released();
    
    UFUNCTION(BlueprintCallable)
    void Quick03Pressed();
    
    UFUNCTION(BlueprintCallable)
    void Quick02Released();
    
    UFUNCTION(BlueprintCallable)
    void Quick02Pressed();
    
    UFUNCTION(BlueprintCallable)
    void Quick01Released();
    
    UFUNCTION(BlueprintCallable)
    void Quick01Pressed();
    
    UFUNCTION(BlueprintCallable)
    void QuestReleased();
    
    UFUNCTION(BlueprintCallable)
    void QuestPressed();
    
    UFUNCTION(BlueprintCallable)
    void PreviousTargetReleased();
    
    UFUNCTION(BlueprintCallable)
    void PreviousTargetPressed();
    
    UFUNCTION(BlueprintCallable)
    void PostReleased();
    
    UFUNCTION(BlueprintCallable)
    void PostPressed();
    
    UFUNCTION(BlueprintCallable)
    void PKModeChangeReleased();
    
    UFUNCTION(BlueprintCallable)
    void PKModeChangePressed();
    
    UFUNCTION(BlueprintCallable)
    void PetDeckChangeReleased();
    
    UFUNCTION(BlueprintCallable)
    void PetDeckChangePressed();
    
    UFUNCTION(BlueprintCallable)
    void PartySearchReleased();
    
    UFUNCTION(BlueprintCallable)
    void PartySearchPressed();
    
    UFUNCTION(BlueprintCallable)
    void PartyReleased();
    
    UFUNCTION(BlueprintCallable)
    void PartyPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnlyUserTargetChangeReleased();
    
    UFUNCTION(BlueprintCallable)
    void OnlyUserTargetChangePressed();
    
    UFUNCTION(BlueprintCallable)
    void NextTargetReleased();
    
    UFUNCTION(BlueprintCallable)
    void NextTargetPressed();
    
    UFUNCTION(BlueprintCallable)
    void MyInfoReleased();
    
    UFUNCTION(BlueprintCallable)
    void MyInfoPressed();
    
    UFUNCTION(BlueprintCallable)
    void MoveUpReleased();
    
    UFUNCTION(BlueprintCallable)
    void MoveUpPressed();
    
    UFUNCTION(BlueprintCallable)
    void MoveRightReleased();
    
    UFUNCTION(BlueprintCallable)
    void MoveRightPressed();
    
    UFUNCTION(BlueprintCallable)
    void MoveLeftReleased();
    
    UFUNCTION(BlueprintCallable)
    void MoveLeftPressed();
    
    UFUNCTION(BlueprintCallable)
    void MoveDownReleased();
    
    UFUNCTION(BlueprintCallable)
    void MoveDownPressed();
    
    UFUNCTION(BlueprintCallable)
    void MissionReleased();
    
    UFUNCTION(BlueprintCallable)
    void MissionPressed();
    
    UFUNCTION(BlueprintCallable)
    void MenuReleased();
    
    UFUNCTION(BlueprintCallable)
    void MenuPressed();
    
    UFUNCTION(BlueprintCallable)
    void MapReleased();
    
    UFUNCTION(BlueprintCallable)
    void MapPressed();
    
    UFUNCTION(BlueprintCallable)
    void MagicStoneDeckChangeReleased();
    
    UFUNCTION(BlueprintCallable)
    void MagicStoneDeckChangePressed();
    
    UFUNCTION(BlueprintCallable)
    void LockOnReleased();
    
    UFUNCTION(BlueprintCallable)
    void LockOnPressed();
    
    UFUNCTION(BlueprintCallable)
    void KeyViewReleased();
    
    UFUNCTION(BlueprintCallable)
    void KeyViewPressed();
    
    UFUNCTION(BlueprintCallable)
    void KeySpaceReleased();
    
    UFUNCTION(BlueprintCallable)
    void KeySpacePressed();
    
    UFUNCTION(BlueprintCallable)
    void GuildReleased();
    
    UFUNCTION(BlueprintCallable)
    void GuildPressed();
    
    UFUNCTION(BlueprintCallable)
    void FastRunReleased();
    
    UFUNCTION(BlueprintCallable)
    void FastRunPressed();
    
    UFUNCTION(BlueprintCallable)
    void EventReleased();
    
    UFUNCTION(BlueprintCallable)
    void EventPressed();
    
    UFUNCTION(BlueprintCallable)
    void EquipReleased();
    
    UFUNCTION(BlueprintCallable)
    void EquipPressed();
    
    UFUNCTION(BlueprintCallable)
    void DeviceBackReleased();
    
    UFUNCTION(BlueprintCallable)
    void DeviceBackPressed();
    
    UFUNCTION(BlueprintCallable)
    void DashReleased();
    
    UFUNCTION(BlueprintCallable)
    void DashPressed();
    
    UFUNCTION(BlueprintCallable)
    void CloseReleased();
    
    UFUNCTION(BlueprintCallable)
    void ClosePressed();
    
    UFUNCTION(BlueprintCallable)
    void ChatReleased();
    
    UFUNCTION(BlueprintCallable)
    void ChatPressed();
    
    UFUNCTION(BlueprintCallable)
    void CameraReleased();
    
    UFUNCTION(BlueprintCallable)
    void CameraPressed();
    
    UFUNCTION(BlueprintCallable)
    void AvoidReleased();
    
    UFUNCTION(BlueprintCallable)
    void AvoidPressed();
    
    UFUNCTION(BlueprintCallable)
    void AutoCollectReleased();
    
    UFUNCTION(BlueprintCallable)
    void AutoCollectPressed();
    
    UFUNCTION(BlueprintCallable)
    void AutoBattleReleased();
    
    UFUNCTION(BlueprintCallable)
    void AutoBattlePressed();
    
    UFUNCTION(BlueprintCallable)
    void AttackReleased();
    
    UFUNCTION(BlueprintCallable)
    void AttackPressed();
    
    UFUNCTION(BlueprintCallable)
    void AlarmReleased();
    
    UFUNCTION(BlueprintCallable)
    void AlarmPressed();
    
    UFUNCTION(BlueprintCallable)
    void ActReleased();
    
    UFUNCTION(BlueprintCallable)
    void ActPressed();
    
};

