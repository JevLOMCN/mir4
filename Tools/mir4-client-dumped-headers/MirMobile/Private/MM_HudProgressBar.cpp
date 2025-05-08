#include "MM_HudProgressBar.h"

UMM_HudProgressBar::UMM_HudProgressBar() {
    this->m_pAnim_Progress_End = NULL;
    this->m_pAnim_Progress_Loof = NULL;
    this->m_CanProgressObj = NULL;
    this->m_CanLoopEffect = NULL;
    this->Pro_Guage = NULL;
    this->txt_progress = NULL;
    this->m_RemainCountHorizontalBox = NULL;
    this->m_Txt_RemainCount = NULL;
    this->btn_gather_info = NULL;
    this->scaleBoxTitle = NULL;
    this->TxtTitle = NULL;
    this->ovlBuff = NULL;
    this->vtcBuffInfo = NULL;
    this->btnBuffTooltip = NULL;
    this->imgBuffIcon[0] = NULL;
    this->imgBuffIcon[1] = NULL;
    this->imgBuffIcon[2] = NULL;
    this->imgBuffIcon[3] = NULL;
    this->imgBuffIcon[4] = NULL;
    this->wgtBuffInfoSlot[0] = NULL;
    this->wgtBuffInfoSlot[1] = NULL;
    this->wgtBuffInfoSlot[2] = NULL;
    this->wgtBuffInfoSlot[3] = NULL;
    this->wgtBuffInfoSlot[4] = NULL;
}

void UMM_HudProgressBar::OnClickGatherInfo() {
}

void UMM_HudProgressBar::OnClickBuffIcon() {
}


