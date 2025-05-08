#include "MirWrapScrollBox.h"

UMirWrapScrollBox::UMirWrapScrollBox() {
    this->m_iSlotCountPerLine = 1;
    this->m_eStyle = EStyle_MirWrapScrollBox::CustomStyle;
    this->m_pParentWidget = NULL;
}

void UMirWrapScrollBox::OnScrollEvent(float Offset) {
}


