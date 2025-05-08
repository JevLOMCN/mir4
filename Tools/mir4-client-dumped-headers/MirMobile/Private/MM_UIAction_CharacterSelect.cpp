#include "MM_UIAction_CharacterSelect.h"

UMM_UIAction_CharacterSelect::UMM_UIAction_CharacterSelect() {
    this->MAX_SLOT_COUNT = 5;
    this->LIMIT_SLOT_COUNT = 5;
    this->SOUND_GAMESTART = 2206012;
    this->STRING_DELETE_DIALOG_TITLE = 1003179;
    this->STRING_DELETE_DIALOG_DESCRIPTION = 1003180;
    this->STRING_DELETE_DIALOG_BTN_OK = 1003182;
    this->STRING_DELETE_DIALOG_BTN_CANCEL = 1003181;
    this->STRING_DELETE_UNABLE_GAMESTART = 1003183;
}

void UMM_UIAction_CharacterSelect::OnTimeoutGameStart() {
}

void UMM_UIAction_CharacterSelect::OnDialogDeleteCharacter() {
}


