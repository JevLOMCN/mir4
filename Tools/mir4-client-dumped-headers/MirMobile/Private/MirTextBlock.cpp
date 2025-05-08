#include "MirTextBlock.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility

UMirTextBlock::UMirTextBlock() {
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
    this->m_ResaveColorID = -1;
    this->m_eStyle = EStyle_MirTextBlock::CustomStyle;
    this->m_bUseAdjustFontSize = false;
    this->m_StringTableType = EStringTableType::NONE;
    this->m_StringTableID = 0;
}

void UMirTextBlock::AdjustFontSize_Excute() {
}


