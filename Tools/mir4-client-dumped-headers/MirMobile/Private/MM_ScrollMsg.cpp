#include "MM_ScrollMsg.h"

UMM_ScrollMsg::UMM_ScrollMsg() {
    this->m_eType = EUIActionMessageWidgetType::None;
    this->m_fSetMessageTime = 1.00f;
    this->m_fMoveSpeed = 400.00f;
    this->m_iSlotMax = 3;
    this->m_fSlotHeightScale = 0.80f;
    this->m_Grid_DisplayArea = NULL;
}


