#include "MM_PetMain.h"

UMM_PetMain::UMM_PetMain() {
    this->m_iInventoryID = 17;
    this->m_iMinInvenSlotCount = 20;
    this->m_Btn_ShowGradeUpPopup = NULL;
    this->m_Img_PetTypeBg = NULL;
    this->m_Img_Pet_Origin = NULL;
    this->m_Txt_PetType = NULL;
    this->m_Txt_Name = NULL;
    this->m_Img_Grade = NULL;
    this->m_Txt_CombatPoint = NULL;
    this->m_Overlay_Locked = NULL;
    this->m_arSkillSlot[0] = NULL;
    this->m_arSkillSlot[1] = NULL;
    this->m_arSkillSlot[2] = NULL;
    this->m_arSkillSlot[3] = NULL;
    this->m_arEquipSlot[0] = NULL;
    this->m_arEquipSlot[1] = NULL;
    this->m_arEquipSlot[2] = NULL;
    this->m_arEquipSlot[3] = NULL;
    this->m_arEquipSlot[4] = NULL;
    this->m_arEquipSlot[5] = NULL;
    this->m_arEquipSlot[6] = NULL;
    this->m_arEquipSlot[7] = NULL;
    this->m_SkillSlotEffect = NULL;
    this->m_Can_ShowGradeUpInfo = NULL;
    this->m_Btn_ShowGradeUpInfo = NULL;
    this->m_Can_GradeUpInfo = NULL;
    this->m_Img_GradeUpPetIcon_Bg = NULL;
    this->m_Img_GradeUpPetIcon = NULL;
    this->m_Img_GradeUpPetIcon_Grade = NULL;
    this->m_Txt_GradeUpPetIcon_Name = NULL;
    this->m_Img_GradeUpInfo_PreGrade = NULL;
    this->m_Img_Next = NULL;
    this->m_Img_GradeUpInfo_NextGrade = NULL;
    this->m_Txt_GradeUpInfo_MaxGrade = NULL;
    this->m_arPetGradeUp_SkillLevelSlot[0] = NULL;
    this->m_arPetGradeUp_SkillLevelSlot[1] = NULL;
    this->m_arPetGradeUp_SkillLevelSlot[2] = NULL;
    this->m_arPetGradeUp_SkillLevelSlot[3] = NULL;
    this->m_arPetGradeUp_SkillLevelSlot[4] = NULL;
    this->m_arSlot_GradeUpMaterial[0] = NULL;
    this->m_arSlot_GradeUpMaterial[1] = NULL;
    this->m_arSlot_GradeUpMaterial[2] = NULL;
    this->m_arSlot_GradeUpMaterial[3] = NULL;
    this->m_Hrz_MaxGradeNotice = NULL;
    this->m_Hrz_SuccessRate = NULL;
    this->m_Txt_SuccessRate = NULL;
    this->m_CB_CancelGradeUp = NULL;
    this->m_CB_GradeUp = NULL;
    this->m_Vrt_SkillInfo = NULL;
    this->m_Txt_SkillName = NULL;
    this->m_RTxt_SkillDes = NULL;
    this->m_Vrt_ItemInfo = NULL;
    this->m_Txt_ItemName = NULL;
    this->m_RTxt_PassiveName = NULL;
    this->m_RTxt_PassiveDes = NULL;
    this->m_Vrt_StatInfo = NULL;
    this->m_CB_ShowPopupUnlockedPetStatInfo = NULL;
    this->m_Hrz_StatInfo[0] = NULL;
    this->m_Hrz_StatInfo[1] = NULL;
    this->m_Txt_StatType[0] = NULL;
    this->m_Txt_StatType[1] = NULL;
    this->m_Txt_StatValue[0] = NULL;
    this->m_Txt_StatValue[1] = NULL;
    this->m_Txt_StatEmpty = NULL;
    this->m_Can_Right = NULL;
    this->m_PetDeckGroup = NULL;
    this->m_PetDeckGroup_New = NULL;
    this->m_PetQuickTab = NULL;
    this->m_Txt_SelectDeckIndex = NULL;
    this->m_Btn_SelectDeck = NULL;
    this->m_Vrt_ShowPopupEquippedPetStat = NULL;
    this->m_Btn_ShowPopupEquippedPetStat = NULL;
    this->m_Img_PetQuickTabBg = NULL;
    this->m_Can_PetQuickTab = NULL;
    this->m_CB_PetListTab = NULL;
    this->m_CB_ItemListTab = NULL;
    this->m_Scr_PetList = NULL;
    this->m_Wrap_PetList = NULL;
    this->m_PetEquipInven = NULL;
    this->m_SortListBtn = NULL;
    this->m_CB_PetCompose = NULL;
    this->m_CB_Action = NULL;
    this->m_CB_EquipCompose = NULL;
    this->m_PetEquipGuide = NULL;
    this->m_PetEquipItemGuide = NULL;
    this->m_Btn_Back = NULL;
    this->m_Btn_PetClick = NULL;
    this->m_AniQuickTabStart = NULL;
    this->m_AniQuickTabEnd = NULL;
    this->m_AniQuickTabClick = NULL;
    this->m_AniPetSkillSlot[0] = NULL;
    this->m_AniPetSkillSlot[1] = NULL;
    this->m_AniPetSkillSlot[2] = NULL;
    this->m_AniPetSkillSlot[3] = NULL;
    this->m_AniPetEquipSlot[0] = NULL;
    this->m_AniPetEquipSlot[1] = NULL;
    this->m_AniPetEquipSlot[2] = NULL;
    this->m_AniPetEquipSlot[3] = NULL;
    this->m_AniPetEquipSlot[4] = NULL;
    this->m_AniPetEquipSlot[5] = NULL;
    this->m_AniPetEquipSlot[6] = NULL;
    this->m_AniPetEquipSlot[7] = NULL;
    this->m_AniShowSkillInfo = NULL;
    this->m_AniHideSkillInfo = NULL;
    this->m_AniShowItemInfo = NULL;
    this->m_AniHideItemInfo = NULL;
    this->m_AniShowStatInfo = NULL;
    this->m_AniHideStatInfo = NULL;
}

void UMM_PetMain::ShowPetQuickTab(bool bShow) {
}

void UMM_PetMain::OnExcute_GradeUp() {
}

void UMM_PetMain::OnClick_ShowPopupUnlockedPetStatInfo() {
}

void UMM_PetMain::OnClick_ShowPopupEquippedPetStatInfo() {
}

void UMM_PetMain::OnClick_ShowGradeUpPopup() {
}

void UMM_PetMain::OnClick_ShowGradeUpInfo() {
}

void UMM_PetMain::OnClick_SelectDeck() {
}

void UMM_PetMain::OnClick_PetListTab() {
}

void UMM_PetMain::OnClick_PetEquipItemGuideBg() {
}

void UMM_PetMain::OnClick_PetEquipGuideBg() {
}

void UMM_PetMain::OnClick_PetCompose() {
}

void UMM_PetMain::OnClick_Pet() {
}

void UMM_PetMain::OnClick_ItemListTab() {
}

void UMM_PetMain::OnClick_GradeUp() {
}

void UMM_PetMain::OnClick_EquipCompose() {
}

void UMM_PetMain::OnClick_CancelGradeUp() {
}

void UMM_PetMain::OnClick_Back() {
}

void UMM_PetMain::OnClick_Action() {
}


