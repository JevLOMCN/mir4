#include "MiniGame_PlayerActor.h"

AMiniGame_PlayerActor::AMiniGame_PlayerActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_fCurFlipbookLength = 0.00f;
    this->m_MiniGameActor = NULL;
}




void AMiniGame_PlayerActor::OnReleased_Right() {
}

void AMiniGame_PlayerActor::OnReleased_Move() {
}

void AMiniGame_PlayerActor::OnReleased_Left() {
}

void AMiniGame_PlayerActor::OnPressed_Right() {
}

void AMiniGame_PlayerActor::OnPressed_Left() {
}

void AMiniGame_PlayerActor::OnClick_Avoid() {
}

void AMiniGame_PlayerActor::OnClick_Attack() {
}

AMiniGame_ManagerActor* AMiniGame_PlayerActor::GetMiniGameActor() {
    return NULL;
}



