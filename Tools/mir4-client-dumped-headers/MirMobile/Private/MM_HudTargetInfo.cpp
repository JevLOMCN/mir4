#include "MM_HudTargetInfo.h"

UMM_HudTargetInfo::UMM_HudTargetInfo() {
    this->Can_Mana = NULL;
    this->BuffInfoList = NULL;
    this->Img_MaintargetIcon_BG = NULL;
    this->Txt_Maintarget_Grade = NULL;
    this->Progressbar_TargetHP = NULL;
    this->targetManaPrg = NULL;
    this->Text_Mana = NULL;
    this->levelTxt = NULL;
    this->nameTxt = NULL;
    this->MainTargetButton = NULL;
    this->Can_SubTargetInfo = NULL;
    this->Text_SubtargetHP = NULL;
    this->Prg_SubTargetHp = NULL;
    this->Txt_SubTarget_Level = NULL;
    this->Txt_SubTarget_Name = NULL;
    this->Btn_Sub_Close = NULL;
    this->Can_Worldboss_Con = NULL;
    this->Btn_WorldBoss_Contribution = NULL;
    this->SubTargetButton = NULL;
    this->m_pMainTargetSubMenu = NULL;
    this->m_pSubTargetSubMenu = NULL;
    this->btn_lock = NULL;
    this->Img_Unlock = NULL;
    this->Img_Lock = NULL;
    this->HorizontalBox_MainBuffListArea = NULL;
    this->Can_Target_Sharing = NULL;
    this->Btn_Target_Sharing = NULL;
    this->aniTargetSharing = NULL;
    this->m_BuffInfoStartAni = NULL;
    this->m_BuffInfoStartAniShort = NULL;
    this->RecoverSPLimitTime = 0.00f;
    this->ShieldType = 0;
    this->UnbeatableShield = false;
    this->InRecover = false;
    this->RecoveryComplete = false;
    this->ProductionTime = 0.00f;
    this->StartTime = 0.00f;
}

void UMM_HudTargetInfo::OnClickToggleBossContribution() {
}

void UMM_HudTargetInfo::OnClickTargetShare() {
}

void UMM_HudTargetInfo::OnClickTargetLock() {
}

void UMM_HudTargetInfo::OnClickSubTargetClose() {
}

void UMM_HudTargetInfo::OnClickSubTarget() {
}

void UMM_HudTargetInfo::OnClickMainTarget() {
}

void UMM_HudTargetInfo::OnClickBuffIcon(int32 idx) {
}


