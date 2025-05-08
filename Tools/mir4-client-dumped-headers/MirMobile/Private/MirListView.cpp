#include "MirListView.h"

UMirListView::UMirListView() : UListView(FObjectInitializer::Get()) {
    this->m_eStyle = EStyle_MirListView::CustomStyle;
}

bool UMirListView::ChangeEntryWidget(int32 iIndex) {
    return false;
}


