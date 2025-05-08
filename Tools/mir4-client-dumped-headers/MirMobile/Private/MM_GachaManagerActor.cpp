#include "MM_GachaManagerActor.h"

AMM_GachaManagerActor::AMM_GachaManagerActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_pGachaDirectingData = NULL;
    this->m_GachaInteractionObject = NULL;
}






void AMM_GachaManagerActor::SetGachaObjectData(bool bSkip, EGachaType GachaType, const TArray<EGachaResultType> GachaResultTypeList, const TArray<int32> ItemIDList, const TArray<int32> ItemGradeList) {
}

void AMM_GachaManagerActor::SetGachaObjectActors(const TArray<UChildActorComponent*> ChildActorComponents) {
}

void AMM_GachaManagerActor::SetGachaInteractionObjectActor(const UChildActorComponent* ChildActorComponent) {
}




void AMM_GachaManagerActor::PlayLowGradeOpenSequence() {
}

void AMM_GachaManagerActor::PlayHighGradeOpenSequence() {
}



void AMM_GachaManagerActor::GachaStart() {
}

void AMM_GachaManagerActor::GachaSecondSequence() {
}

void AMM_GachaManagerActor::GachaMovieFinished() {
}




void AMM_GachaManagerActor::ChangeCameraView(EGachaViewType ViewType) {
}


