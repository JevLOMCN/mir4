#include "MM_UIAction_ItemCollection.h"

UMM_UIAction_ItemCollection::UMM_UIAction_ItemCollection() {
    this->m_PercentFormatStrID = 1099021;
    this->m_ValueFormatStrID = 1099018;
    this->m_CharStrID = 1099037;
    this->m_AccountStrID = 1099036;
    this->m_GradeWarningStr = 1099061;
    this->m_GradeWithTradeWarningStr = 1099062;
    this->m_WarningStrID = 102003;
    this->m_CheckStrID = 101001;
    this->m_CancelStrID = 101002;
    this->m_TimeFormatStrID = 1099076;
}

void UMM_UIAction_ItemCollection::SendRegistCollectItemNoArg() {
}

void UMM_UIAction_ItemCollection::OnReturnFromSmelt() {
}


