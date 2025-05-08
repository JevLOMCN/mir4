#include "MM_CharacterCustomizingActor.h"
#include "MM_CharacterPartsComponent.h"

AMM_CharacterCustomizingActor::AMM_CharacterCustomizingActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_pFaceControlMesh = NULL;
    this->m_pFaceAreaMarkMID = NULL;
    this->m_pMainFaceMesh = NULL;
    this->m_pCopyFaceMesh = NULL;
    this->m_pPartsComponent = CreateDefaultSubobject<UMM_CharacterPartsComponent>(TEXT("PartsComponent"));
    this->m_pPoseableFaceMesh = NULL;
}

void AMM_CharacterCustomizingActor::InitLoadComplete() {
}


void AMM_CharacterCustomizingActor::BlueprintEvent_SetActorHiddenInGame(bool bNewHidden) {
}


