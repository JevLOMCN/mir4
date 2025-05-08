#include "MM_PlayerController.h"

AMM_PlayerController::AMM_PlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->m_MouseWheelValue = 0.00f;
    this->PC = NULL;
}


