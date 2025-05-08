#include "MM_HudUserInfo.h"

UMM_HudUserInfo::UMM_HudUserInfo() {
    this->m_iCombatPointFontBigSize = 0;
    this->m_iCombatPointFontSmallSize = 0;
    this->m_pImgPartyLeader = NULL;
    this->m_pTextLevel = NULL;
    this->m_pTextCombatPoint = NULL;
    this->Progressbar_UserHP = NULL;
    this->m_pProgressMP = NULL;
    this->Text_MyMP = NULL;
    this->Panel_EndEdgeEffect = NULL;
    this->Image_MPDecoImage = NULL;
    this->Anim_MPIdle = NULL;
    this->Anim_MPUse = NULL;
    this->m_pTextPKMode = NULL;
    this->m_pImg_PKMode_Icon = NULL;
    this->m_pCan_PKMode_Effect = NULL;
    this->txtBuffCount = NULL;
    this->m_pBtnUserInfo = NULL;
    this->m_pBtnPKMode = NULL;
    this->m_pBuffInfoList = NULL;
    this->m_pBtnBuff = NULL;
}

void UMM_HudUserInfo::OnClickPKMode() {
}

void UMM_HudUserInfo::OnClickBuff() {
}


