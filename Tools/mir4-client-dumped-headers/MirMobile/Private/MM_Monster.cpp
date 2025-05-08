#include "MM_Monster.h"

AMM_Monster::AMM_Monster(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bMultiTarget = true;
    this->MonDebugFSMLogCount = 10;
    this->m_bDrawPushPullLocation = false;
    this->TestFloat = 0.00f;
    this->m_bPoolingObject = false;
    this->m_pMonNameTag = NULL;
    this->m_pMonsterGroup = NULL;
    this->m_fDeleteTime = 10.00f;
    this->m_bHideNameTag = true;
    this->m_pMonsterEntityComp = NULL;
    this->SPState = 0;
    this->SPUpdateTime = 0.00f;
    this->SPStateLimitTime = 0.00f;
}

void AMM_Monster::TestFunction2() {
}

void AMM_Monster::TestFunction1() {
}

void AMM_Monster::StartAirWalk(TArray<FVector> DestLocList) {
}

void AMM_Monster::OnDamageEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex) {
}

void AMM_Monster::OnDamageBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AMM_Monster::OnAutoMoveFinished() {
}


