#include "MM_Common_ToolTipBtn.h"

UMM_Common_ToolTipBtn::UMM_Common_ToolTipBtn() {
    this->m_iStringToolTipTID = 0;
    this->ImageVisible = true;
    this->IsOverrideToolTipLocation = false;
    this->OverrideToolTipLocation = EToolTipLocation::Auto;
    this->m_Btn_Main = NULL;
    this->m_Img_Icon = NULL;
}

void UMM_Common_ToolTipBtn::OnUnhovered_Main() {
}

void UMM_Common_ToolTipBtn::OnHovered_Main() {
}

void UMM_Common_ToolTipBtn::OnClick_Main() {
}


