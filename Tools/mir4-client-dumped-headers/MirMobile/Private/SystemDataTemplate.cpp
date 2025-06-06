#include "SystemDataTemplate.h"

FSystemDataTemplate::FSystemDataTemplate() {
    this->Index = 0;
    this->GuildCreationMembers = 0;
    this->GuildCreationLevel = 0;
    this->GuildJoinMaxLevel = 0;
    this->GuildCreationCostType = 0;
    this->GuildCreationCostCount = 0;
    this->GuildIdentityChangeCostType = 0;
    this->GuildIdentityCostCount = 0;
    this->CharacterCostumeTitleItemUseId = 0;
    this->CharacterCostumeTitleItemCount = 0;
    this->CharacterNameChangeItemUseId = 0;
    this->CharacterNameChangeItemCount = 0;
    this->CharacterNameChangeCostId = 0;
    this->CharacterNameChangeCostCount = 0;
    this->ForceReflowCureItemId = 0;
    this->ForceReflowCureUseId = 0;
    this->Use_Item_Time_CriticalFail_Minute = 0;
    this->PetAdditionExpPercent = 0;
    this->PET_READYSTATE_ENDTIMER = 0;
    this->UnsealingSlotCount = 0;
    this->GuildHelpCount = 0;
    this->Support_Acceleration_Time = 0;
    this->DeathPenalty_Injure_AccelerationPoint = 0;
    this->Unsealing_Acceleration_Point = 0;
    this->GreatBuilding_Acceleration_Point = 0;
    this->Unsealing_Acceleration_GoldExchange = 0;
    this->GreatBuilding_Acceleration_GoldExchange = 0;
    this->CustomizeItemUseId = 0;
    this->CustomizeItemCount = 0;
    this->CustomizeCostId = 0;
    this->CustomizeCostCount = 0;
    this->Base_Accuracy = 0;
    this->Min_Accuracy = 0;
    this->Per_AccuracyDamage = 0;
    this->Per_PvP_MinAmplify = 0;
    this->Per_PvP_MaxAmplify = 0;
    this->Per_UserToMonster_MinAmplify = 0;
    this->Per_UserToMonster_MaxAmplify = 0;
    this->Per_UserToBoss_MinAmplify = 0;
    this->Per_UserToBoss_MaxAmplify = 0;
    this->Per_MonsterToUser_MinAmplify = 0;
    this->Per_MonsterToUser_MaxAmplify = 0;
    this->Per_BossToUser_MinAmplify = 0;
    this->Per_BossToUser_MaxAmplify = 0;
    this->Per_MonsterToMonster_MinAmplify = 0;
    this->Per_MonsterToMonster_MaxAmplify = 0;
    this->Per_MonsterToBoss_MinAmplify = 0;
    this->Per_MonsterToBoss_MaxAmplify = 0;
    this->Base_Critical = 0;
    this->Base_CriticalOutcome = 0;
    this->Base_Smite = 0;
    this->HPOverPer = 0;
    this->HPOverDamagePer = 0;
    this->Damage_Amplify_Max = 0;
    this->Per_Damage_Amplify_Max_Apply = 0.00f;
    this->Per_Buff_Battle_Diff_Min = 0.00f;
    this->Per_Battle_Diff_Min = 0.00f;
    this->Per_Critical_Max = 0;
    this->Per_Critical_Max_Apply = 0.00f;
    this->Smite_Amplify_Max = 0;
    this->REVIVAL_SafetyIncreaseReqLv = 0;
    this->Trade_SystemTax = 0;
    this->Trade_ApplyTax = 0;
    this->Trade_SalesTime = 0;
    this->Trade_OverSalePrice = 0;
    this->Trade_OverSaleWaitingTime = 0;
    this->Trade_SaleLimitLv = 0;
    this->RevivalHP = 0;
    this->DeathPenalty_EXP_SaveLogMaxCnt = 0;
    this->DeathPenalty_EXP_FreeRecovery_Limit = 0;
    this->Dominion_Strongpoint_BlackIron_Limit = 0;
    this->Dominion_Tax_SabookCastle_Enable = 0;
    this->Dominion_Tax_BicheonCastle_Enable = 0;
    this->Dominion_Tax_StrongPoint_Enable = 0;
    this->Dominion_Strongpoint_Blackiron_Max = 0;
    this->Dominion_Tax_BicheonCastle_Gold_Max = 0;
    this->Dominion_Tax_BicheonCastle_Blackiron_Max = 0;
    this->GUILD_DOMINION_Bitcheon_Gold_Transfer_Tax = 0;
    this->DeathPenalty_Injure_GoldExchangeRate = 0;
    this->DamageLimit_StandardDmg = 0;
    this->DamageLimit_Denominator = 0;
    this->Compose_FailPointMax_INT = 0;
    this->Compose_FailPoint_INT = 0;
    this->CharacterMaxSlotCount = 0;
    this->Training_CriticalFail_Tolerance = 0;
    this->Server_Visit_Max_Count = 0;
    this->Server_Visit_Open_Hour = 0;
    this->Server_Visit_Open_Min = 0;
    this->Server_Visit_Keep_Time = 0;
    this->ServerVisit_PkWin_ADay_Gain_MaxCount_ServerVister = 0;
    this->ServerVisit_PkWin_ADay_Gain_MaxCount_NotServerVister = 0;
    this->Guest_ShopEnter_Enable = 0;
    this->Per_NormalAtk_Min = 0;
    this->SaleItemBasket_MaxCount = 0;
    this->FT_BlackIron_to_Coin_Cost = 0;
    this->FT_Coin_to_BlackIron_Cost = 0;
    this->FT_Coin_to_Balckiron_Sum_Denominator = 0;
    this->FT_BlackIron_to_Coin_Success_Mail = 0;
    this->FT_BlackIron_to_Coin_Fail_Mail = 0;
    this->FT_Coin_to_BlackIron_Success_Mail = 0;
    this->FT_Coin_to_BlackIron_Fail_Normal_Mail = 0;
    this->FT_Coin_to_BlackIron_Fail_DailyLimit_Mail = 0;
    this->FT_Coin_to_BlackIron_Fail_MaxLimit_Mail = 0;
    this->FT_Coin_Derby_StartHour = 0;
    this->FT_Coin_Derby_StartMin = 0;
    this->FT_Coin_Derby_KeepTime = 0;
    this->FT_Coin_DailySmeltLimit = 0;
    this->FT_Coin_Delay_BuffId = 0;
    this->DarkSteel_MinimumReserve = 0;
    this->FT_Hydra_to_Coin_Cost_ItemID = 0;
    this->HYDRA_Max_Exchange = 0;
    this->WorldChattingLv = 0;
    this->ItemAutoOptionChangeLevelLimit = 0;
    this->DarkSteel_Block_Buff = 0;
    this->GuildMarkerGlobalCool = 0;
    this->AutoLogOut_Level = 0;
    this->AutoLogOut_Time = 0;
    this->AutoLogOut_OnOff = 0;
    this->AutoLogOut_CaptchaTime = 0;
    this->ShoppingBasket_Max = 0;
    this->UserToDarkDamage_Min = 0;
    this->UserToDarkDamage_Max = 0;
    this->MonsterToDarkDamage_Min = 0;
    this->MonsterToDarkDamage_Max = 0;
    this->WonderDelay = 0;
}

