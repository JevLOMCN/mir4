#include "MM_Hud_Chat_MacroSlot.h"

UMM_Hud_Chat_MacroSlot::UMM_Hud_Chat_MacroSlot() {
    this->GuideMsgTid = 1033103;
    this->SubmitMsgTID = 1033104;
    this->CheckEmptyTextMsgTID = 1033901;
    this->m_Txt_Number = NULL;
    this->m_EditTxt_MacroMessage = NULL;
    this->m_Btn_Submit = NULL;
    this->m_SlotIndex = 0;
}

void UMM_Hud_Chat_MacroSlot::OnCommittedMacroTextField(const FText& InText, TEnumAsByte<ETextCommit::Type> CommitType) {
}

void UMM_Hud_Chat_MacroSlot::OnClickSendMessage() {
}

void UMM_Hud_Chat_MacroSlot::OnChangedMacroTextField(const FText& InText) {
}


