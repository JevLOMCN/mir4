#include "MM_Hud_Chat_Area.h"

UMM_Hud_Chat_Area::UMM_Hud_Chat_Area() {
    this->Panel_VoiceOption = NULL;
    this->Toggle_Macro = NULL;
    this->Toggle_VoiceChat_Off = NULL;
    this->Toggle_VoiceChat_On = NULL;
    this->EditTxt_Chatting = NULL;
    this->STRING_UNABLE_MESSAGE = 1033904;
    this->STRING_ENABLE_MESSAGE = 1033201;
}

void UMM_Hud_Chat_Area::OnToggleVoiceChat(bool CheckState) {
}

void UMM_Hud_Chat_Area::OnToggleMacroChat(bool CheckState) {
}

void UMM_Hud_Chat_Area::OnTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UMM_Hud_Chat_Area::OnTextChanged(const FText& Text) {
}


