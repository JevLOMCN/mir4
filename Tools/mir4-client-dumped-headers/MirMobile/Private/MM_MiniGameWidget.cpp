#include "MM_MiniGameWidget.h"

UMM_MiniGameWidget::UMM_MiniGameWidget() {
    this->m_MiniGameActor = NULL;
    this->m_PlayerActor = NULL;
    this->m_Prg_PlayerHP = NULL;
    this->m_Txt_KillCountValueBest = NULL;
    this->m_Txt_KillCountValue = NULL;
    this->m_RTxt_Notice = NULL;
    this->m_Img_LeftPressed = NULL;
    this->m_Btn_Left = NULL;
    this->m_Img_RightPressed = NULL;
    this->m_Btn_Right = NULL;
    this->m_Can_Avoid = NULL;
    this->m_Btn_Avoid = NULL;
    this->m_Img_Avoid = NULL;
    this->m_Btn_Attack = NULL;
    this->m_Txt_KeyA = NULL;
    this->m_Txt_KeyD = NULL;
    this->m_Txt_KeyK = NULL;
    this->m_Txt_KeyL = NULL;
    this->m_Can_Pause = NULL;
    this->m_Btn_Pause = NULL;
    this->m_Btn_SetPause = NULL;
    this->m_Btn_Restart = NULL;
    this->m_Can_PatchNotice = NULL;
    this->m_Overlay_StartPatch = NULL;
    this->m_RTxt_PatchNotice = NULL;
    this->m_RTxt_PatchEndNotice = NULL;
    this->m_Btn_StartPatch = NULL;
    this->m_Can_StartBtnAni = NULL;
    this->m_Ani_StartBtn = NULL;
    this->m_VolumeController = NULL;
    this->m_pCanInteractionSize = NULL;
    this->m_pImg_Thumb = NULL;
    this->m_pImg_PadBG = NULL;
}

void UMM_MiniGameWidget::UpdateScore(int32 _Value) {
}

void UMM_MiniGameWidget::UpdateHP(float _Value) {
}

void UMM_MiniGameWidget::UpdateBestScore() {
}

void UMM_MiniGameWidget::OnReleased_Right() {
}

void UMM_MiniGameWidget::OnReleased_Left() {
}

void UMM_MiniGameWidget::OnPressed_Right() {
}

void UMM_MiniGameWidget::OnPressed_Left() {
}

void UMM_MiniGameWidget::OnClick_StartPatch() {
}

void UMM_MiniGameWidget::OnClick_SetPause() {
}

void UMM_MiniGameWidget::OnClick_Restart() {
}

void UMM_MiniGameWidget::OnClick_Pause() {
}

void UMM_MiniGameWidget::OnClick_Avoid() {
}

void UMM_MiniGameWidget::OnClick_Attack() {
}

void UMM_MiniGameWidget::EnableAvoid(bool bEnable) {
}


