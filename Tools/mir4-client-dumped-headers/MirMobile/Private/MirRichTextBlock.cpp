#include "MirRichTextBlock.h"

UMirRichTextBlock::UMirRichTextBlock() : URichTextBlock(FObjectInitializer::Get()) {
    this->m_ResaveColorID = -1;
    this->m_bDefaultShadow = false;
    this->m_bUseAdjustFontSize = false;
    this->m_StringTableType = EStringTableType::NONE;
    this->m_StringTableID = 0;
}

void UMirRichTextBlock::AdjustFontSize_Excute() {
}


