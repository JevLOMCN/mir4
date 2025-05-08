#include "MyAirWalk.h"

AMyAirWalk::AMyAirWalk(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_fAnimID = 0.00f;
    this->m_PlayerIndex = 0;
    this->m_bPlayMatinee = false;
    this->m_fCapsuleHalfHeigth = 0.00f;
    this->m_fCapsuleRadius = 0.00f;
    this->m_pMatinee = NULL;
    this->m_pMatineeCam = NULL;
    this->m_UseBossNameUi = false;
}


