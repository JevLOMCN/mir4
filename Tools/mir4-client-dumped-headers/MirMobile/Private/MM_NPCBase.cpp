#include "MM_NPCBase.h"
#include "MM_NpcFunctionComponent.h"

AMM_NPCBase::AMM_NPCBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_NPCNameTag = NULL;
    this->m_NPCMenu = NULL;
    this->m_QuestID = 0;
    this->m_QuestIndex = 0;
    this->m_QuestType = 0;
    this->m_pNpcFunctionComponent = CreateDefaultSubobject<UMM_NpcFunctionComponent>(TEXT("NpcFunctionComponent"));
}

void AMM_NPCBase::OnSightEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex) {
}

void AMM_NPCBase::OnSightBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AMM_NPCBase::OnInteractionEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex) {
}

void AMM_NPCBase::OnInteractionBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


