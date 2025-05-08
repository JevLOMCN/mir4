#include "MM_PatchWidget.h"

UMM_PatchWidget::UMM_PatchWidget() {
    this->m_MediaPlayer = NULL;
    this->m_MediaTexture = NULL;
    this->m_Movie_Logo = NULL;
    this->m_MediaSoundActor = NULL;
    this->m_Can_Splash = NULL;
    this->m_Scl_Movie = NULL;
    this->m_Overlay_Warning = NULL;
    this->m_RTxt_Warning = NULL;
    this->m_Ani_Splash = NULL;
    this->m_Can_Patch = NULL;
    this->m_Txt_DownloadMsg = NULL;
    this->m_Txt_DownloadPercent = NULL;
    this->m_Txt_DownloadSize = NULL;
    this->m_Txt_DownloadSpeed = NULL;
    this->m_Prg_Progress = NULL;
    this->m_Txt_IOS_BackgroundDownload = NULL;
    this->m_Overlay_Popup = NULL;
    this->m_Txt_Title = NULL;
    this->m_RTxt_Msg = NULL;
    this->m_Overlay_Cancel = NULL;
    this->m_Txt_Cancel = NULL;
    this->m_Btn_Cancel = NULL;
    this->m_Overlay_Confirm = NULL;
    this->m_Txt_Confirm = NULL;
    this->m_Btn_Confirm = NULL;
    this->m_iDebugModeClickCount = 5;
    this->m_Can_Debug = NULL;
    this->m_Btn_Debug = NULL;
    this->m_Txt_DownloadFileName = NULL;
}

void UMM_PatchWidget::ShowDebugPanel() {
}

void UMM_PatchWidget::OnEndReached() {
}

void UMM_PatchWidget::OnClick_PopupConfirm() {
}

void UMM_PatchWidget::OnClick_PopupCancel() {
}

void UMM_PatchWidget::ClosePopup() {
}


