#include "WidgetInfo.h"

FWidgetInfo::FWidgetInfo() {
    this->m_eWidgetID = EWidgetID::MM_TEMP_IMAGE;
    this->m_iWidgetLayerPriority = 0;
    this->m_bMaintainWidget = false;
    this->m_bUseWidgetPool = false;
    this->m_bAsyncLoading = false;
    this->m_bShowingForAsyncLoading = false;
}

