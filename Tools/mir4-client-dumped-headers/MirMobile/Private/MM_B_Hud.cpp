#include "MM_B_Hud.h"

UMM_B_Hud::UMM_B_Hud() {
    this->m_StrongPointWinTarget = NULL;
    this->m_DarkAltarTarget = NULL;
    this->m_pTargetInfoWidget = NULL;
    this->m_pChatWidget = NULL;
    this->m_pHudBottomWidget = NULL;
    this->m_pRightMenu = NULL;
    this->m_QuickSlot = NULL;
    this->m_pCanTotalQuickSlot = NULL;
    this->m_pBtnTotalQuickSlot = NULL;
    this->m_pAlarmHelper = NULL;
    this->m_pUserInfoWidget = NULL;
    this->m_pSkillSetWidget = NULL;
    this->m_pLeftTabMenuWidget = NULL;
    this->m_pProgressBarWidget = NULL;
    this->m_pMapInfoWidget = NULL;
    this->m_pCanInteractionSize = NULL;
    this->m_pHUDVirtualJoystick = NULL;
    this->m_pCanAutoMoveDistance = NULL;
    this->m_pTextAutoMoveDistance = NULL;
    this->m_pCanImmediateMove = NULL;
    this->m_pBtnImmediateMove = NULL;
    this->m_pTxtImmediateMove = NULL;
    this->m_pHudInviteAlarm = NULL;
    this->m_pLeftBottomGroup = NULL;
    this->m_pHudMenuGroup01 = NULL;
    this->m_pCanMenuGuild = NULL;
    this->m_pImgIndicatorGuild = NULL;
    this->m_pBtnMenuGuild = NULL;
    this->m_pGridMenuEffectGuild = NULL;
    this->m_pCanMenuMission = NULL;
    this->m_pImgIndicatorMission = NULL;
    this->m_pBtnMenuMission = NULL;
    this->m_pGridMenuEffectMission = NULL;
    this->m_pCanMenuEquip = NULL;
    this->m_pImgIndicatorEquip = NULL;
    this->m_pBtnMenuEquip = NULL;
    this->m_pGridMenuEffectEquip = NULL;
    this->m_pImgDurabilityBGEquip = NULL;
    this->m_pImgDurabilityIconEquip = NULL;
    this->m_pTxtDurabilityEquip = NULL;
    this->m_pCanMenuAlarm = NULL;
    this->m_pImgIndicatorAlarm = NULL;
    this->m_pTextIndicatorAlarm = NULL;
    this->m_pBtnMenuAlarm = NULL;
    this->m_pGridMenuEffectAlarm = NULL;
    this->m_pEffectWidgetAlarm = NULL;
    this->m_pCanMenuTotal = NULL;
    this->m_pImgIndicatorTotal = NULL;
    this->m_pBtnMenuTotal = NULL;
    this->m_pHudMenuGroup02 = NULL;
    this->m_pCanMenuMail = NULL;
    this->m_pImgIndicatorMail = NULL;
    this->m_pBtnMenuMail = NULL;
    this->m_pGridMenuEffectMail = NULL;
    this->m_pCanMenuShop = NULL;
    this->m_pImgIndicatorShop = NULL;
    this->m_pBtnMenuShop = NULL;
    this->m_pGridMenuEffectShop = NULL;
    this->m_pCanMenuShopAds = NULL;
    this->m_pImgIndicatorShopAds = NULL;
    this->m_pBtnMenuShopAds = NULL;
    this->m_pGridMenuEffectShopAds = NULL;
    this->m_pCanMenuEvent = NULL;
    this->m_pBtnMenuEvent = NULL;
    this->m_pImgIndicatorEvent = NULL;
    this->m_pGridMenuEffectEvent = NULL;
    this->m_pCanGuildSupport = NULL;
    this->m_pBtn_GuildSupport = NULL;
    this->m_pTextGuildSupport = NULL;
    this->m_pTextExpBooster = NULL;
    this->m_pBtn_ExpBooster = NULL;
    this->m_pGridMenuEffectExpBooster = NULL;
    this->m_pEffectWidgetExpBoosterActive = NULL;
    this->m_pEffectWidgetExpBoosterInActive = NULL;
    this->m_pBtnEmotion = NULL;
    this->m_pGridBtnEffectEmotion = NULL;
    this->m_pBtnChat = NULL;
    this->m_pImgIndicatorChat = NULL;
    this->m_pTextIndicatorChat = NULL;
    this->m_pGridBtnEffectChat = NULL;
    this->m_pBtnChangeCamera = NULL;
    this->m_pTextChangeCamera = NULL;
    this->m_pGridBtnEffectChangeCamera = NULL;
    this->m_pCanBtnVehicle = NULL;
    this->m_pImgVehicleCool = NULL;
    this->m_pBtnVehicle = NULL;
    this->m_pGridBtnEffectVehicle = NULL;
    this->m_HudPKPenalty = NULL;
    this->m_HudTargetList = NULL;
    this->m_HudChannelReady = NULL;
    this->m_HudDragonCrackSlot = NULL;
    this->m_pCanAutoBattleButton = NULL;
    this->m_pImgAutoBattleButton = NULL;
    this->m_pGridEffectAutoBattleButton = NULL;
    this->m_pEffectAutoBattleOn = NULL;
    this->m_pBtnAutoBattle = NULL;
    this->m_pCanAutoGatherButton = NULL;
    this->m_pImgAutoGatherButton = NULL;
    this->m_pGridEffectAutoGatherButton = NULL;
    this->m_pEffectAutoGatherOn = NULL;
    this->m_pBtnAutoGather = NULL;
    this->AutoCounterPanel = NULL;
    this->AutoCounterButton = NULL;
    this->AutoCounterEffectParent = NULL;
    this->AutoCounterEffect = NULL;
    this->m_Spc_ContentsSpace = NULL;
    this->m_HudScaleBox = NULL;
    this->m_HudSiszeBox = NULL;
    this->m_arHudPetBuffIcon[0] = NULL;
    this->m_arHudPetBuffIcon[1] = NULL;
    this->m_arHudPetBuffIcon[2] = NULL;
    this->m_arHudPetBuffIcon[3] = NULL;
    this->m_arHudPetBuffIcon[4] = NULL;
    this->m_arHudPetBuffIcon[5] = NULL;
    this->m_arHudPetBuffIcon[6] = NULL;
    this->m_arHudPetBuffIcon[7] = NULL;
    this->m_arHudPetBuffIcon[8] = NULL;
    this->m_arHudPetBuffIcon[9] = NULL;
    this->m_Can_HudBtn_PetChange = NULL;
    this->m_Btn_PetChange = NULL;
    this->m_Grid_BtnEffect_PetChange = NULL;
    this->m_Overlay_QuickTab = NULL;
    this->m_Can_PetQuickTab = NULL;
    this->m_Can_MagicStoneQuickTab = NULL;
    this->m_Can_MysticalPieceQuickTab = NULL;
    this->m_PetQuickTab = NULL;
    this->m_MagicStoneQuickTab = NULL;
    this->m_MysticalPieceQuickTab = NULL;
    this->m_Btn_QuickTabClose = NULL;
    this->m_Ani_PetChange_Start = NULL;
    this->m_Ani_PetChange_End = NULL;
    this->m_iMSTRID_PhaseCantUseMenu = 1025003;
    this->m_iMSTRID_DualCantUseMenu = 1045008;
    this->m_iMSTRID_DontMoveArea = 1019033;
    this->m_fShowLogTime = 5.00f;
    this->m_Can_HumanAuth = NULL;
    this->m_Img_HumanAuth_Normal = NULL;
    this->m_Img_HumanAuth_Warning_0 = NULL;
    this->m_Img_HumanAuth_Warning_1 = NULL;
    this->m_Txt_HumanAuth_RemainTime = NULL;
    this->m_Btn_HumanAuth = NULL;
}

void UMM_B_Hud::OnClickTotalQuickSlot() {
}

void UMM_B_Hud::OnClickQuickTabClose() {
}

void UMM_B_Hud::OnClickPetChange() {
}

void UMM_B_Hud::OnClickMenuTotal() {
}

void UMM_B_Hud::OnClickMenuShopAds() {
}

void UMM_B_Hud::OnClickMenuShop() {
}

void UMM_B_Hud::OnClickMenuMission() {
}

void UMM_B_Hud::OnClickMenuMail() {
}

void UMM_B_Hud::OnClickMenuGuild() {
}

void UMM_B_Hud::OnClickMenuGrowth() {
}

void UMM_B_Hud::OnClickMenuEvent() {
}

void UMM_B_Hud::OnClickMenuEquip() {
}

void UMM_B_Hud::OnClickMenuAlarm() {
}

void UMM_B_Hud::OnClickImmediateMove() {
}

void UMM_B_Hud::OnClickHumanAuth() {
}

void UMM_B_Hud::OnClickButtonVehicle() {
}

void UMM_B_Hud::OnClickButtonGuildSupport() {
}

void UMM_B_Hud::OnClickButtonExpBooster() {
}

void UMM_B_Hud::OnClickButtonEmotion() {
}

void UMM_B_Hud::OnClickButtonChat() {
}

void UMM_B_Hud::OnClickButtonChangeCamera() {
}

void UMM_B_Hud::OnClickAutoGatherButton() {
}

void UMM_B_Hud::OnClickAutoCounterButton() {
}

void UMM_B_Hud::OnClickAutoBattleButton() {
}

void UMM_B_Hud::ClickAutoGatherButton() {
}

void UMM_B_Hud::ClickAutoBattleButton() {
}


