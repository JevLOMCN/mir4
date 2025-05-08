#include "MM_HudAutoBattle.h"

UMM_HudAutoBattle::UMM_HudAutoBattle() {
    this->AutoExecEffectID = 0;
    this->TouchEffectID = 0;
    this->BehaviorType = EBehaviorType::Default;
    this->SelecteButton = NULL;
    this->SelectedIcon = NULL;
    this->ExpandList = NULL;
    this->ExecuteEffectWidget = NULL;
    this->TouchEffectWidget = NULL;
}

void UMM_HudAutoBattle::ClearTouchEffect() {
}


