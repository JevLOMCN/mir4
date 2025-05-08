#include "MiniGame_MonsterActor.h"

AMiniGame_MonsterActor::AMiniGame_MonsterActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_fCurFlipbookLength = 0.00f;
    this->m_fCurPlayerPos = 0.00f;
    this->m_MiniGameData = NULL;
    this->m_MiniGameActor = NULL;
}








AMiniGame_ManagerActor* AMiniGame_MonsterActor::GetMiniGameActor() {
    return NULL;
}





